#include "dlg_shooting_range.h"
#include "ui_dlg_shooting_range.h"

dlg_shooting_range::dlg_shooting_range(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dlg_shooting_range)
{
    ui->setupUi(this);
    //text_edit.setPlaceholderText("Search")
    ui->TE_Footnotes->setPlaceholderText("Prostor pro poznámky, maximum 125 znaků");
    ui->Label_Shooting_Charactercount->setText("0 z 125");

    DlgYesNo = new dlg_ask(this);
    DlgYesNo->setGeometry((geometry().width()),(geometry().height()),250,300);
    DlgYesNo->close();

    DlgShootingGun = new dlg_shooting_gun(this);
    DlgShootingGun->setGeometry((geometry().width()),(geometry().height()),500,500);
    DlgShootingGun->close();


}


dlg_shooting_range::~dlg_shooting_range()
{
    delete ui;
}

void dlg_shooting_range::clearShooting(){
    //datum
    QDate now = QDate::currentDate();
    ui->CB_Shooting_Range_Inside->setChecked(false);
    ui->CB_Shooting_Range_Outside->setChecked(false);
    ui->LE_Shooting_AmountOfGuns->clear();
    ui->LE_Shooting_FinalPrice->clear();
    ui->LE_Shooting_RangeName->clear();
    ui->Label_Shooting_Charactercount->clear();
    //ui->Label_Shooting_InvoiceLink->clear();
    ui->CW_Shooting->setSelectedDate(now);
    ui->TE_Footnotes->clear();
}


//potvrzeni
void dlg_shooting_range::on_PB_Shooting_Confirm_clicked()
{

    //podminky:
        //musi byt vyplneny nazev strelnice, pocet zbrani a typ strelnice, datum
        //nemusi byt fotka, uctenka, cenovka

    //regexp na pocet
    QRegExp Validate("[0-9]{0,20}");


    QSqlQuery sql_query;
    QString str_Query;
    QString Optional;
    if((ui->TE_Footnotes->toPlainText().length()<=125 && Validate.exactMatch(ui->LE_Shooting_AmountOfGuns->text())) && (Validate.exactMatch(ui->LE_Shooting_FinalPrice->text())) && (ui->LE_Shooting_RangeName->text()!="") && ((ui->CB_Shooting_Range_Inside->isChecked() || ui->CB_Shooting_Range_Outside->isChecked())))
    {
    /*


        //pripojeni datumu                                                                  nazvu strelnice
        Optional.append(ui->CW_Shooting->selectedDate().toString("yyyy.MM.dd")+";"+ui->LE_Shooting_RangeName->text()+";");

        //pripojeni umisteni uvnitr/venku
        if((ui->CB_Shooting_Range_Inside->isChecked()) && ui->CB_Shooting_Range_Outside->isChecked()){
            Optional.append("In+Out;");
        }
        if(ui->CB_Shooting_Range_Inside->isChecked() && ui->CB_Shooting_Range_Outside->isChecked()==false){
            Optional.append("In;");
        }
        if(ui->CB_Shooting_Range_Outside->isChecked() && ui->CB_Shooting_Range_Inside->isChecked()==false){
            Optional.append("Out;");
        }


        //pripojeni cenovky
        if(ui->LE_Shooting_FinalPrice->text()!=""){
            Optional.append(ui->LE_Shooting_FinalPrice->text()+";");
        } else {
            Optional.append("0;");
        }

        //pripojeni poznamky
        if(ui->TE_Footnotes->toPlainText().length()>0){
            Optional.append(ui->TE_Footnotes->toPlainText()+";");
        } else {
            Optional.append("0;");
        }


        //pripojeni odkazu na soubor
        if(ui->Label_Shooting_InvoiceLink->text().length()>0){
            Optional.append(ui->Label_Shooting_InvoiceLink->text()+";");
        } else {
            Optional.append("0;");
        }
*/
        //datum     nazev st.  typ(in/out)    cenovka     poznamka    soubor  fotka
        //INSERT INTO `gapp`.`records_shooting` (`DATE`, `RANGE_NAME`, `RANGE_TYPE`, `SHOOTING_PRICE`, `SHOOTING_NOTE`, `INVOICE_LINK`, `PHOTO_LINK`) VALUES ('d', 'd', 'd', 'd', 'd', 'd', 'd')

        if(ui->CB_Shooting_Range_Inside->isChecked()){
            str_Query =     "INSERT INTO `gapp`.`records_shooting` (`DATE`, `RANGE_NAME`, `RANGE_TYPE`, `SHOOTING_PRICE`, `SHOOTING_NOTE`, `INVOICE_LINK`, `PHOTO_LINK`) ";
            str_Query +=    "VALUES ('"+ ui->CW_Shooting->selectedDate().toString("yyyy.MM.dd") +"', '"+ ui->LE_Shooting_RangeName->text() +"', 0, "+ QString::number(ui->LE_Shooting_FinalPrice->text().toInt()) +", '"+ ui->TE_Footnotes->toPlainText() +"', 'X', 'X')";
            //qDebug() << str_Query;
            if(sql_query.exec(str_Query)){  }

            emit REFRESH();
        } else if(ui->CB_Shooting_Range_Outside->isChecked()) {
            str_Query =     "INSERT INTO `gapp`.`records_shooting` (`DATE`, `RANGE_NAME`, `RANGE_TYPE`, `SHOOTING_PRICE`, `SHOOTING_NOTE`, `INVOICE_LINK`, `PHOTO_LINK`) ";
            str_Query +=    "VALUES ('"+ ui->CW_Shooting->selectedDate().toString("yyyy.MM.dd") +"', '"+ ui->LE_Shooting_RangeName->text() +"', 1, "+ QString::number(ui->LE_Shooting_FinalPrice->text().toInt()) +", '"+ ui->TE_Footnotes->toPlainText() +"', 'X', 'X')";
            //qDebug() << str_Query;
            if(sql_query.exec(str_Query)){  }

            emit REFRESH();
        }


    //Vyzva k vlozeni zbrani
    DlgYesNo->setTitle("Přejít k druhé části?");
    DlgYesNo->setDescription("Přejete si vložit záznamy jednotlivých zbraní?\nK této části se můžete kdykoliv vrátit.");
    int AskResult = DlgYesNo->exec();

    //postup:
        //vytahnout z DB zbrane, ktere vlastnim

    if(AskResult == QDialog::Accepted){
        QStringList CBGuns;
        QString Line;
        QFile OwnedArms("C:/Users/kolacj/Documents/ShooTracker/ShootTrackerOwnedArms.txt");
        QTextStream stream(&OwnedArms);
        if(OwnedArms.open(QIODevice::ReadOnly))
        {
            while (stream.atEnd() == false)
            {
               Line=stream.readLine();
               CBGuns.append(Line);
            }
        }

        //qDebug() << CBGuns;



        for(int i=0;i<ui->LE_Shooting_AmountOfGuns->text().toInt();i++){

            DlgShootingGun->setOrder(ui->Label_Shooting_ID_Number->text().toInt()+1);
            DlgShootingGun->InitArms(CBGuns);
            DlgShootingGun->exec();

        //qDebug() << i << " z " << ui->LE_Shooting_AmountOfGuns->text().toInt();




        }


    } else {
        clearShooting();
        this->close();
    }

    }
}


/*
//načtení účtenky
void dlg_shooting_range::on_PB_Shooting_LoadInvoice_clicked()
{
    //výzva k otevření a vybrání souboru
    QString SourceFile=QFileDialog::getOpenFileName(this, tr("Otevřít soubor"),"C:/Users/kolacj/Desktop","Textový soubor (*.txt);;Soubor jpg (*.jpg);;Soubor png (*.png);;");

    //vytvoření QFile se souborem
    QFile Invoice(SourceFile);

    //Vypsání koncovky souboru po splitu
    ui->Label_Shooting_InvoiceLink->setText(SourceFile.split("/").last());;

    //vytvoření a nadefinování nové cesty vč. přípony z vybraného souboru (viz. split z předchozího řádku)
    QString DestinationFile;
    DestinationFile = "C:/Users/kolacj/Documents/ShooTracker/userfiles/"+SourceFile.split("/").last();

    //podmínka na již existující duplicitní soubor
    if(Invoice.copy(DestinationFile)==false){

        //vyvolání dotazového dialogu
        DlgYesNo->setTitle("Existující název");
        DlgYesNo->setDescription("Soubor s tímto názvem již existuje.\nPřejete si jej přepsat?");
        int AskResult = DlgYesNo->exec();

        //jestli ANO, přejmenuji, jestli ne, nepřejmenuji a nezkopíruji - vymažu cesty a počkám na další input
        if(AskResult == QDialog::Accepted){
            QFile Copy(DestinationFile);
            Copy.remove();
            Invoice.copy(DestinationFile);
            Copy.close();
        } else {
            ui->Label_Shooting_InvoiceLink->clear();
            Invoice.remove();
            SourceFile.clear();
            DlgYesNo->close();
        }
    }
    Invoice.close();
}
*/
//načtení fotky
void dlg_shooting_range::on_PB_Shooting_LoadPhoto_clicked()
{
    //výzva k otevření a vybrání souboru
    QString SourceFile=QFileDialog::getOpenFileName(this, tr("Otevřít soubor"),"C:/Users/kolacj/Desktop","Soubor jpg (*.jpg);;Soubor png (*.png);;");

    //vytvoření QFile se souborem
    QFile Photo(SourceFile);

    //Vypsání koncovky souboru po splitu
    //ui->Label_Shooting_PhotoLink->setText(SourceFile.split("/").last());;

    //vytvoření a nadefinování nové cesty vč. přípony z vybraného souboru (viz. split z předchozího řádku)
    QString DestinationFile;
    DestinationFile = "C:/Users/kolacj/Documents/ShooTracker/userfiles/"+SourceFile.split("/").last();

    //podmínka na již existující duplicitní soubor
    if(Photo.copy(DestinationFile)==false){

        //vyvolání dotazového dialogu
        DlgYesNo->setTitle("Existující název");
        DlgYesNo->setDescription("Soubor s tímto názvem již existuje.\nPřejete si jej přepsat?");
        int AskResult = DlgYesNo->exec();

        //jestli ANO, přejmenuji, jestli ne, nepřejmenuji a nezkopíruji - vymažu cesty a počkám na další input
        if(AskResult == QDialog::Accepted){
            QFile Copy(DestinationFile);
            Copy.remove();
            Photo.copy(DestinationFile);
            Copy.close();

            //načtení fotky do labelu s fotkou
            QPixmap LabelPhoto(DestinationFile);
            //ui->Label_Shooting_Photo->setPixmap(LabelPhoto);

        } else {
            //ui->Label_Shooting_InvoiceLink->clear();
            Photo.remove();
            SourceFile.clear();
            DlgYesNo->close();
        }
    } else {
        //načtení fotky do labelu s fotkou

        //=====================================================
        //DORESIT:
            //rozmerovani - na zaklade rozmeru labelu Label_Shooting_Photo
            //Problem? Ruzne obrazky o ruznych rozmerech rozhazuji tady toto pole.
        //=====================================================

        QPixmap LabelPhoto(DestinationFile);
        //ui->Label_Shooting_Photo->setPixmap(LabelPhoto.scaled(ui->Label_Shooting_Photo->width(),ui->Label_Shooting_Photo->height(), Qt::IgnoreAspectRatio));
    }
    Photo.close();





}

//počítadlo na znaky
void dlg_shooting_range::on_TE_Footnotes_textChanged()
{

    int Amount=0;
    Amount=ui->TE_Footnotes->toPlainText().length();

    //qDebug() << "Velikost: " << ui->TE_Footnotes->toPlainText().length();
    ui->Label_Shooting_Charactercount->setText(QString::number(Amount)+" z 125");

    if(ui->TE_Footnotes->toPlainText().length()>125){
        QLabel *le = new QLabel();
        le = ui->Label_Shooting_Charactercount;
        le->setStyleSheet("QLabel { background: rgb(237,28,36);}");


    } else {
        QLabel *le = new QLabel();
        le = ui->Label_Shooting_Charactercount;
        le->setStyleSheet("QLabel { background: rgb(57, 169, 255);}");
    }

}


void dlg_shooting_range::on_PB_Shooting_Back_2_clicked()
{
    this->close();
}

