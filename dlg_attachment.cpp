#include "dlg_attachment.h"
#include "ui_dlg_attachment.h"

dlg_attachment::dlg_attachment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dlg_attachment)
{
    ui->setupUi(this);

    ui->ACTION->setVisible(false);
    ui->ATTACHMENT_ID->setVisible(false);

    Init();
}

dlg_attachment::~dlg_attachment()
{
    delete ui;
}

//init
void dlg_attachment::Init(){
    QSqlQuery sql_query;
    QString str_Query;


    str_Query = "SELECT state_full, ID FROM gapp.states ";
    if(sql_query.exec(str_Query))
    {  while(sql_query.next())
        {
            ui->CB_Attachment_Origin->addItem(sql_query.value(0).toString(),QVariant::fromValue(sql_query.value(1).toString()));
        }
    }

    //0 = Pažba\n1 = Zásobník\n2 = Optika / kolimátor\n3 = Tlumič\n4 = Grip na předpažbí\n5 = Pistol grip
    QStringList Types = {"Pažba;0","Zásobník;1","Optika / kolimátor;2","Tlumič;3","Grip na předpažbí;4","Pistol grip;5"};

    for(int i=0;i<Types.size();i++){
        ui->CB_Attachment_Type->addItem(Types.value(i).split(";").value(0),QVariant::fromValue(Types.value(i).split(";").value(1)));
    }


    DlgWarning = new dlg_warning(this);
    DlgWarning->setGeometry((geometry().width()),(geometry().height()),250,125);
    DlgWarning->close();

    DlgYesNo = new dlg_ask(this);
    DlgYesNo->setGeometry((geometry().width()),(geometry().height()),250,125);
    DlgYesNo->close();
}

//vyčištění
void dlg_attachment::clear(){
    ui->LE_Attachment_Manufacturer->clear();
    ui->LE_Attachment_Name->clear();
    ui->LE_Attachment_Price->clear();
    ui->LE_Attachment_SN->clear();
    ui->LE_Attachment_Vendor->clear();
}

//kontrola údajů
void dlg_attachment::checkAll(){
    QSqlQuery sql_query;
    QString str_Query;

    if(ui->ACTION->text().toInt()==0){
        ui->CB_Attachment_Type->setCurrentIndex(-1);
        ui->CB_Attachment_Origin->setCurrentIndex(-1);
        clear();
    } else {
        str_Query = "SELECT ANAME, ATYPE, SN, DATE_BOUGHT, VENDOR, ORIGIN,  PRICE, MANUFACTURER FROM gapp.arms_owned_Attachments WHERE id = "+ QString::number(ui->ATTACHMENT_ID->text().toInt()) +"";
        if(sql_query.exec(str_Query))
        {  while(sql_query.next())
            {
                // -1 za currentindexem pro změnu indexu, je o jedno napřed

                ui->CB_Attachment_Origin->setCurrentIndex(sql_query.value(5).toInt()-1);
                ui->CB_Attachment_Type->setCurrentIndex(sql_query.value(1).toInt());
                ui->LE_Attachment_SN->setText(sql_query.value(2).toString());
                ui->LE_Attachment_Name->setText(sql_query.value(0).toString());
                ui->LE_Attachment_Vendor->setText(sql_query.value(4).toString());
                ui->CW_Attachment->setSelectedDate(sql_query.value(3).toDate());
                ui->LE_Attachment_Price->setText(sql_query.value(6).toString());
                ui->LE_Attachment_Manufacturer->setText(sql_query.value(7).toString());
            }
        }
    }
}

//zavření okna
void dlg_attachment::on_PB_Attachment_Back_clicked()
{
    this->close();
}

//nastavení titulku
void dlg_attachment::setTitle(QString Title){
    ui->label_title->setText(Title);
}

//nastavení akce -> 0=Nová, 1=Existující
void dlg_attachment::setAction(QString Action){
    ui->ACTION->setText(Action);
}

//nastavení ID zbraně pro případ úpravy existující
void dlg_attachment::setAttachmentID(QString AttachmentID){
    ui->ATTACHMENT_ID->setText(AttachmentID);
}

//vytvoření nového záznamu / update existujícího
void dlg_attachment::on_PB_Yes_clicked()
{
        QSqlQuery sql_query;
        QString str_Query;
        QRegExp Validate("[0-9]{0,5}");

        //podmínka pro vyplněné proměnné
        if(ui->CB_Attachment_Origin->currentIndex()!=-1 && ui->CB_Attachment_Type->currentIndex()!=-1
           && ui->LE_Attachment_SN->text()!="" && ui->LE_Attachment_Name->text()!="" && ui->LE_Attachment_Vendor->text()!="" && Validate.exactMatch(ui->LE_Attachment_Price->text()) && ui->LE_Attachment_Manufacturer->text()!="")
        {
            if(ui->ACTION->text().toInt()==0){
                str_Query = "INSERT INTO gapp.arms_owned_attachments (ANAME, MANUFACTURER, ATYPE, SN, PRICE, DATE_BOUGHT, VENDOR, ORIGIN) "
                            "VALUES ('"+ ui->LE_Attachment_Name->text() +"', '"+ ui->LE_Attachment_Manufacturer->text() +"', "+ ui->CB_Attachment_Type->currentData().toString()  +", '"+ ui->LE_Attachment_SN->text() +"', "
                            ""+ ui->LE_Attachment_Price->text() +", '"+ ui->CW_Attachment->selectedDate().toString("yyyy-MM-dd") +"', '"+ ui->LE_Attachment_Vendor->text() +"', "+ ui->CB_Attachment_Origin->currentData().toString() +")";
                if(sql_query.exec(str_Query))
                {
                    DlgWarning->setTitle("Úspěšný vklad");
                    DlgWarning->setDescription("Vámi zadané příslušenství bylo úspěšně vloženo do systému.");
                    DlgWarning->exec();
                    emit REFRESH();
                    this->close();
                } else
                {

                    DlgWarning->setTitle("Vyskytla se chyba");
                    DlgWarning->setDescription("Vámi zadané příslušenství nebylo vloženo do systému.\nZkontrolujte prosím vložené hodnoty");
                    DlgWarning->exec();
                }
            }
            if(ui->ACTION->text().toInt()==1){
                str_Query = "UPDATE gapp.arms_owned_attachments SET ANAME ='"+ ui->LE_Attachment_Name->text() +"', ATYPE = "+ ui->CB_Attachment_Type->currentData().toString() +", SN = '"+ ui->LE_Attachment_SN->text() +"', "
                            "DATE_BOUGHT = '"+ ui->CW_Attachment->selectedDate().toString("yyyy-MM-dd") +"', ORIGIN = "+ ui->CB_Attachment_Origin->currentData().toString() +", VENDOR = '"+ ui->LE_Attachment_Vendor->text() +"', PRICE = "+ ui->LE_Attachment_Price->text()+" "
                            "WHERE (ID = "+ QString::number(ui->ATTACHMENT_ID->text().toInt()) +") ";
                if(sql_query.exec(str_Query))
                {
                    DlgWarning->setTitle("Úspěšná úprava vkladu");
                    DlgWarning->setDescription("Vámi zadaná zbraň byla úspěšně upravena v systému.");
                    DlgWarning->exec();
                    emit REFRESH();
                    this->close();
                } else
                {
                    DlgWarning->setTitle("Vyskytla se chyba");
                    DlgWarning->setDescription("Vámi zadaná zbraň nebyla upravena v systému.\nZkontrolujte prosím vložené hodnoty");
                    DlgWarning->exec();
                }
            }
        } else {
            DlgWarning->setTitle("Vyskytla se chyba");
            DlgWarning->setDescription("Některé z hodnot nebyly zadány, doplňte je.");
            DlgWarning->exec();
        }
}

//vymazání záznamu
void dlg_attachment::on_PB_Delete_clicked()
{

    QSqlQuery sql_query;
    QString str_Query;
    QRegExp Validate("[0-9]{0,5}");

    if(ui->CB_Attachment_Origin->currentIndex()!=-1 && ui->CB_Attachment_Type->currentIndex()!=-1
       && ui->LE_Attachment_SN->text()!="" && ui->LE_Attachment_Name->text()!="" && ui->LE_Attachment_Vendor->text()!="" && Validate.exactMatch(ui->LE_Attachment_Price->text()) && ui->LE_Attachment_Manufacturer->text()!="")
    {
        DlgYesNo->setTitle("Potvrďte smazání");
        DlgYesNo->setDescription("Opravdu chcete tuto položku smazat?");
        int AskResult = DlgYesNo->exec();
        if(AskResult == QDialog::Accepted)
        {
            str_Query = "DELETE FROM gapp.arms_owned_attachments WHERE (ID = "+ QString::number(ui->ATTACHMENT_ID->text().toInt()) +")";
            if(sql_query.exec(str_Query))
            {
                DlgWarning->setTitle("Záznam smazán");
                DlgWarning->setDescription("Vybrané příslušenství bylo smazáno.");
                DlgWarning->exec();
                emit REFRESH();
                this->close();
            }
            else {
                DlgWarning->setTitle("Vyskytla se chyba");
                DlgWarning->setDescription("Vámi zadané příslušenství nebyla smazáno.\nZkontrolujte prosím vložené hodnoty");
                DlgWarning->exec();
            }

        } if(AskResult == QDialog::Rejected)
        { return;
        }
    }
}

