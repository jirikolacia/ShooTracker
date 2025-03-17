#include "dlg_ammoevid.h"
#include "ui_dlg_ammoevid.h"

dlg_ammoevid::dlg_ammoevid(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dlg_ammoevid)
{
    ui->setupUi(this);
    ui->label_TYPE->setVisible(false);
    disableCB();
    ui->label_ammoevid_ID->setVisible(false);
    ui->label_AMOUNT->setVisible(false);


}

dlg_ammoevid::~dlg_ammoevid()
{
    delete ui;
}

//vyčištění cb
void dlg_ammoevid::clearCB(){
    ui->CB_Caliber->clear();
    ui->CB_Manufacturer->clear();
    ui->CB_Type->clear();
    ui->Line_Amount->clear();
}

//enable CB
void dlg_ammoevid::enableCB(){
    ui->CB_Type->setDisabled(false);
    ui->CB_Manufacturer->setDisabled(false);
}

//disable CB
void dlg_ammoevid::disableCB(){
    ui->CB_Manufacturer->setDisabled(true);
    ui->CB_Type->setDisabled(true);
}

//vynulování indexu CB
void dlg_ammoevid::NullIndex(){
    ui->CB_Caliber->setCurrentIndex(-1);
    ui->CB_Manufacturer->setCurrentIndex(-1);
    ui->CB_Type->setCurrentIndex(-1);
}

//načtení výrobců
void dlg_ammoevid::loadMANUFACTURE(QStringList Manufacture, QStringList ManufactureData){
    for(int i=0;i<Manufacture.size();i++){
        ui->CB_Manufacturer->addItem(Manufacture.value(i),QVariant::fromValue(ManufactureData.value(i)));
    }
    ui->CB_Manufacturer->setCurrentIndex(-1);
}

//načtení typů
void dlg_ammoevid::loadTYPE(QStringList Type, QStringList TypeData){
    for(int i=0;i<Type.size();i++){
        ui->CB_Type->addItem(Type.value(i),QVariant::fromValue(TypeData.value(i)));
    }
    ui->CB_Type->setCurrentIndex(-1);
}

//načtení kalibrů
void dlg_ammoevid::loadCALIBER(QStringList Caliber, QStringList Data){
    for(int i=0;i<Caliber.size();i++){
        ui->CB_Caliber->addItem(Caliber.value(i),QVariant::fromValue(Data.value(i)));
    }
    ui->CB_Caliber->setCurrentIndex(-1);
}

//nastavení titulku
void dlg_ammoevid::setTitle(QString Title){
    ui->label_ammoevid_title->setText(Title);
}

//odběr munice
void dlg_ammoevid::on_PB_Out_clicked()
{
    //definice dialogoveho okna
    DlgWarning = new dlg_warning(this);
    //upravit rozmery
    DlgWarning->setGeometry((geometry().width()),(geometry().height()),500,500);   //240,115
    DlgWarning->close();

    //regexp na pocet
    QRegExp Validate("[0-9]{0,20}");
    QSqlQuery sql_query;
    QString str_Query;



    /*
SELECT AMMOID, SUM(AMOUNT) as CELKEM, STATUSIO FROM ammo_evid WHERE ammoid=4 AND STATUSIO=0
UNION ALL
SELECT AMMOID, SUM(AMOUNT) as CELKEM, STATUSIO FROM ammo_evid WHERE ammoid=4 AND STATUSIO=1

//druhy:
SELECT (SELECT SUM(AMOUNT) as CELKEM FROM ammo_evid WHERE ammoid=11 AND STATUSIO=1) - (SELECT SUM(AMOUNT) as CELKEM FROM ammo_evid WHERE ammoid=11 AND STATUSIO=0) as VYSLEDEK
    */


    //old query         str_Query = "SELECT SUM(AMOUNT) as CELKEM FROM ammo_evid WHERE ammoid="+ QString::number(ui->label_ammoevid_ID->text().toInt()) +" AND STATUSIO=0";

    //==========================
    /*
{


        //dva zpusoby, pokud jsem jeste neudelal zadny vyber tak brat pouze z plusu, pote co ano tak uz automaticky delat porovnani.
        //prvni musi mit vzdy prednost vyber bez odberu

        //kontrola jestli byl uz realizovany odber
        str_Query = "SELECT AMOUNT FROM gapp.ammo WHERE id="+ QString::number(ui->label_ammoevid_ID->text().toInt()) +"";
        qDebug() << "prvni kontrolni QUERY:" << str_Query;
        if(sql_query.exec(str_Query))
        {  while(sql_query.next())
            {
                Sum=sql_query.value(0).toInt();
                if(Sum!=0)
                {
                    test = "Not empty";
                }
                qDebug() << "Nerealizovaný odběr";
            }
        }

        //pokud nebyl, provadim prvni odber pouze od souctu
        if(test.isEmpty()==true){
            str_Query = "SELECT SUM(AMOUNT) as CELKEM FROM ammo_evid WHERE ammoid="+ QString::number(ui->label_ammoevid_ID->text().toInt()) +" AND STATUSIO=1";
            qDebug() << "druha pokud je test prazdny QUERY:" << str_Query;
            if(sql_query.exec(str_Query))
            {  while(sql_query.next())
                {
                    Sum=sql_query.value(0).toInt();
                    qDebug() << "Odběr byl realizován v počtu:" << Sum;
                }
            }
        } else {

            //porovnani v pripade ze uz byl realizovany odber i vklad
            str_Query = "SELECT (SELECT SUM(AMOUNT) as CELKEM FROM ammo_evid WHERE ammoid="+ QString::number(ui->label_ammoevid_ID->text().toInt()) +" AND STATUSIO=1) - "
                        "(SELECT SUM(AMOUNT) as CELKEM FROM ammo_evid WHERE ammoid="+ QString::number(ui->label_ammoevid_ID->text().toInt()) +" AND STATUSIO=0) as VYSLEDEK";
            qDebug() << "pokud neni test prazdny QUERY:" << str_Query;
            if(sql_query.exec(str_Query))
            {  while(sql_query.next())
                {
                    Sum=sql_query.value(0).toInt();
                }
            }
        }



        qDebug() << "Celkem: " << Sum;

        if(Sum>=ui->Line_Amount->text().toInt()){
            qDebug() << "Vyssi hodnota! nebo Rovna!";
            str_Query = "INSERT INTO ammo_evid (AMMOID, MDATE, AMOUNT, STATUSio, INVOICE_LINK) VALUES ("+ QString::number(ui->label_ammoevid_ID->text().toInt()) +", DATE(NOW()), "+ QString::number(ui->Line_Amount->text().toInt())+", 0, 'X')";
            qDebug() << str_Query;
            if(sql_query.exec(str_Query)){}
            DlgWarning->setTitle("Záznam vložen");
            DlgWarning->setDescription("Záznam úspěšně vložen do evidence");
            DlgWarning->exec();
            emit REFRESH();
            this->close();

        } else {
            qDebug() << "Nizsi hodnota";
            DlgWarning->setTitle("Chyba - nesprávný počet!");
            DlgWarning->setDescription("Počet odebraných kusů munice převyšuje počty skladem");
            DlgWarning->exec();
        }

    }


    */
    //==========================



    //podminka pro zapis pouze v pripade ze jsou splneny nasledujici podminky
    if((Validate.exactMatch(ui->Line_Amount->text())) && (ui->CB_Caliber->currentText()!="") && (ui->CB_Manufacturer->currentText()!="") && (ui->CB_Type->currentText()!="")){


        if(ui->label_AMOUNT->text().toInt()>=ui->Line_Amount->text().toInt())
        {
            qDebug() << "Vyssi hodnota! nebo Rovna!";
            str_Query = "INSERT INTO gapp.ammo_evid (AMMOID, MDATE, AMOUNT, STATUSio, INVOICE_LINK) VALUES ("+ QString::number(ui->label_ammoevid_ID->text().toInt()) +", DATE(NOW()), "+ QString::number(ui->Line_Amount->text().toInt())+", 0, 'X')";
            qDebug() << str_Query;
            if(sql_query.exec(str_Query)){}

            str_Query = "UPDATE gapp.ammo SET AMOUNT = "+ QString::number(ui->label_AMOUNT->text().toInt()-ui->Line_Amount->text().toInt())+" WHERE (ID= "+ QString::number(ui->label_ammoevid_ID->text().toInt()) +")";
            if(sql_query.exec(str_Query)){}


            DlgWarning->setTitle("Záznam vložen");
            DlgWarning->setDescription("Záznam úspěšně vložen do evidence");
            DlgWarning->exec();
            emit REFRESH();
            this->close();

         } else {
            qDebug() << "Nizsi hodnota";
            DlgWarning->setTitle("Chyba - nesprávný počet!");
            DlgWarning->setDescription("Počet odebraných kusů munice převyšuje počty skladem");
            DlgWarning->exec();
        }

    } else {
        DlgWarning->setTitle("Chybí údaje!");
        DlgWarning->setDescription("Některý z údajů potřebných pro vytvoření záznamu není správný.\n Prosím o opětovnou kontrolu");
        DlgWarning->exec();
    }



}

//vklad munice
void dlg_ammoevid::on_PB_In_clicked()
{
    //definice dialogoveho okna
    DlgWarning = new dlg_warning(this);
    //upravit rozmery
    DlgWarning->setGeometry((geometry().width()),(geometry().height()),500,500);   //240,115
    DlgWarning->close();

    //regexp na pocet
    QRegExp Validate("[0-9]{0,20}");


    //podminka pro zapis pouze v pripade ze jsou splneny nasledujici podminky
    if((Validate.exactMatch(ui->Line_Amount->text())) && (ui->CB_Caliber->currentText()!="") && (ui->CB_Manufacturer->currentText()!="") && (ui->CB_Type->currentText()!="")){

        QSqlQuery sql_query;
        QString str_Query;

        str_Query = "INSERT INTO ammo_evid (AMMOID, MDATE, AMOUNT, STATUSIO, INVOICE_LINK) VALUES ("+QString::number(ui->label_ammoevid_ID->text().toInt())+", DATE(NOW()), "+QString::number(ui->Line_Amount->text().toInt())+", 1, 'X')";
        qDebug() << str_Query;
        if(sql_query.exec(str_Query)){}


        str_Query = "UPDATE gapp.ammo SET AMOUNT = "+ QString::number(ui->label_AMOUNT->text().toInt()+ui->Line_Amount->text().toInt()) + " WHERE (ID= "+ QString::number(ui->label_ammoevid_ID->text().toInt()) +")";
        qDebug() << "Pricitani: " << str_Query;
        if(sql_query.exec(str_Query)){}

        DlgWarning->setTitle("Záznam vložen");
        DlgWarning->setDescription("Záznam úspěšně vložen do evidence");
        DlgWarning->exec();
        emit REFRESH();
        this->close();

    } else {
        DlgWarning->setTitle("Chybí údaje!");
        DlgWarning->setDescription("Některý z údajů potřebných pro vytvoření záznamu není správný.\n Prosím o opětovnou kontrolu");
        DlgWarning->exec();
    }
}

//změna kalibru -> sql na výrobce
void dlg_ammoevid::on_CB_Caliber_currentTextChanged(const QString &CBText)
{

    if(CBText!=""){
    QSqlQuery sql_query;
    QString str_Query;
    QStringList Manufacture;
    QStringList ManufactureData;

    str_Query = "SELECT am.MNAME, am.id FROM ammo_manufacturer am, ammo a, ammo_caliber ac WHERE a.manufacturer = am.id AND ac.id='"+ ui->CB_Caliber->currentData().toString() +"' AND a.caliber=ac.id GROUP BY am.MNAME ";
    if(sql_query.exec(str_Query))
    {  while(sql_query.next())
        {
            Manufacture.append(sql_query.value(0).toString());
            ManufactureData.append(sql_query.value(1).toString());
        }
    }


    ui->CB_Manufacturer->clear();
    loadMANUFACTURE(Manufacture,ManufactureData);
    ui->CB_Manufacturer->setCurrentIndex(-1);
    ui->CB_Manufacturer->setDisabled(false);
    }
}

//změna výrobce -> sql na typ
void dlg_ammoevid::on_CB_Manufacturer_currentTextChanged(const QString &CBText)
{
    if((CBText!="") && (ui->CB_Manufacturer->currentIndex()>-1)){
    ui->CB_Type->clear();

    QSqlQuery sql_query;
    QString str_Query;
    QStringList Type;
    QStringList TypeData;

    str_Query = "SELECT atp.typ , atp.id FROM ammo_manufacturer am, ammo a, ammo_caliber ac, ammo_type atp WHERE a.manufacturer = am.id AND a.typ=atp.id AND a.caliber=ac.id AND ac.id='"+ ui->CB_Caliber->currentData().toString() +"' AND am.id='"+ ui->CB_Manufacturer->currentData().toString() +"' GROUP BY atp.typ ";
    if(sql_query.exec(str_Query))
    {  while(sql_query.next())
        {
            Type.append(sql_query.value(0).toString());
            TypeData.append(sql_query.value(1).toString());

        }
    }

    ui->CB_Type->clear();
    loadTYPE(Type,TypeData);
    ui->CB_Type->setCurrentIndex(-1);


    ui->CB_Type->setDisabled(false);
    } else {
        ui->CB_Type->clear();
        ui->CB_Type->setCurrentIndex(-1);
        ui->CB_Type->setDisabled(true);
    }
}

//sql typů
void dlg_ammoevid::on_CB_Type_currentIndexChanged(int index)
{
    if(index!=-1)
    {
        QSqlQuery sql_query;
        QString str_Query;

        str_Query = "SELECT a.id, a.amount FROM ammo a WHERE a.caliber = "+ ui->CB_Caliber->currentData().toString() +" and a.manufacturer="+ ui->CB_Manufacturer->currentData().toString() +" and a.typ="+ ui->CB_Type->currentData().toString() +"";
        //qDebug() << "Finalni: " << str_Query;
        if(sql_query.exec(str_Query))
        {
            while(sql_query.next())
            {
                ui->label_ammoevid_ID->setText(sql_query.value(0).toString());
                //qDebug() << "ID je:" << sql_query.value(0).toString();
                //qDebug() << "Amount je:" << sql_query.value(1).toString();
                ui->label_AMOUNT->setText(sql_query.value(1).toString());
            }
        }

    }
}

