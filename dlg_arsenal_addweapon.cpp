#include "dlg_arsenal_addweapon.h"
#include "ui_dlg_arsenal_addweapon.h"

//action types
//0 = new
//1 = edit

dlg_arsenal_addweapon::dlg_arsenal_addweapon(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dlg_arsenal_addweapon)
{
    ui->setupUi(this);

    ui->ACTION->setVisible(false);
    ui->WEAPON_ID->setVisible(false);

    Init();

}

dlg_arsenal_addweapon::~dlg_arsenal_addweapon()
{
    delete ui;
}

//načtení CB hodnotami
void dlg_arsenal_addweapon::Init(){
    QSqlQuery sql_query;
    QString str_Query;

    DlgWarning = new dlg_warning(this);
    DlgWarning->setGeometry((geometry().width()),(geometry().height()),250,125);
    DlgWarning->close();

    DlgYesNo = new dlg_ask(this);
    DlgYesNo->setGeometry((geometry().width()),(geometry().height()),250,125);
    DlgYesNo->close();


    str_Query = "SELECT state_full, ID FROM gapp.states";
    if(sql_query.exec(str_Query))
    {  while(sql_query.next())
        {
            ui->CB_Arsenal_Origin->addItem(sql_query.value(0).toString(),QVariant::fromValue(sql_query.value(1).toString()));
        }
    }

    str_Query = "SELECT atp.name, atp.ZP_CLASS, ID FROM gapp.arms_types atp";
    if(sql_query.exec(str_Query))
    {  while(sql_query.next())
        {
            ui->CB_Arsenal_Type->addItem(sql_query.value(0).toString()+" "+sql_query.value(1).toString(),QVariant::fromValue(sql_query.value(2).toString()));
        }
    }

    str_Query = "SELECT CALIBER, ID FROM gapp.ammo_caliber";
    if(sql_query.exec(str_Query))
    {  while(sql_query.next())
        {
            ui->CB_Arsenal_Caliber->addItem(sql_query.value(0).toString(),QVariant::fromValue(sql_query.value(1).toString()));
        }
    }


}

//kontrola nastavené akce, probíhá po změně čísla v action labelu
void dlg_arsenal_addweapon::checkAll(){
    QSqlQuery sql_query;
    QString str_Query;

    if(ui->WEAPON_ID->text()!=""){
        ui->PB_Delete->setEnabled(true);
    } else {
        ui->PB_Delete->setEnabled(false);
    }


    if(ui->ACTION->text().toInt()==0){
        ui->CB_Arsenal_Caliber->setCurrentIndex(-1);
        ui->CB_Arsenal_Origin->setCurrentIndex(-1);
        ui->CB_Arsenal_Type->setCurrentIndex(-1);
    } else {
        str_Query = "SELECT ao.ANAME, ao.ATYPE, ao.CIP, ao.CALIBER, ao.DATE_BOUGHT, ao.origin, ao.SHOP_NAME, ao.LENGTH FROM gapp.arms_owned ao, gapp.states st WHERE ao.id = "+ QString::number(ui->WEAPON_ID->text().toInt()) +" AND st.id=ao.origin";
        if(sql_query.exec(str_Query))
        {  while(sql_query.next())
            {
                // -1 za currentindexem pro změnu indexu, je o jedno napřed
                ui->CB_Arsenal_Caliber->setCurrentIndex(sql_query.value(3).toInt()-1);
                ui->CB_Arsenal_Origin->setCurrentIndex(sql_query.value(5).toInt()-1);
                ui->CB_Arsenal_Type->setCurrentIndex(sql_query.value(1).toInt()-1);
                ui->LE_Arsenal_CIP->setText(sql_query.value(2).toString());
                ui->LE_Arsenal_Length->setText(sql_query.value(7).toString());
                ui->LE_Arsenal_Name->setText(sql_query.value(0).toString());
                ui->LE_Arsenal_Vendor->setText(sql_query.value(6).toString());
                ui->CW_Arsenal->setSelectedDate(sql_query.value(4).toDate());
            }
        }
    }
}

//nastavení titulku
void dlg_arsenal_addweapon::setTitle(QString Title){
    ui->label_title->setText(Title);
}

//nastavení akce -> 0=Nová, 1=Existující
void dlg_arsenal_addweapon::setAction(QString Action){
    ui->ACTION->setText(Action);

}

//nastavení ID zbraně pro případ úpravy existující
void dlg_arsenal_addweapon::setWeaponID(QString WeaponID){
    ui->WEAPON_ID->setText(WeaponID);

}

//uzavření okna
void dlg_arsenal_addweapon::on_PB_Shooting_Back_2_clicked()
{
    this->close();
}

//zpracování zápisu jak pro nové, tak existující. Podmíněno níže.
void dlg_arsenal_addweapon::on_PB_Yes_clicked()
{
    QSqlQuery sql_query;
    QString str_Query;
    QRegExp Validate("[0-9]{0,5}");

    //podmínka pro vyplněné proměnné
    if(ui->CB_Arsenal_Caliber->currentIndex()!=-1 && ui->CB_Arsenal_Origin->currentIndex()!=-1 && ui->CB_Arsenal_Type->currentIndex()!=-1 && Validate.exactMatch(ui->LE_Arsenal_Length->text())
       && ui->LE_Arsenal_CIP->text()!="" && ui->LE_Arsenal_Length->text()!="" && ui->LE_Arsenal_Name->text()!="" && ui->LE_Arsenal_Vendor->text()!="")
    {

        if(ui->ACTION->text().toInt()==0){
            str_Query = "INSERT INTO gapp.arms_owned (ANAME, ATYPE, CIP, CALIBER, DATE_BOUGHT, SHOP_NAME, LENGTH, origin) "
                        "VALUES ('"+ ui->LE_Arsenal_Name->text() +"', "+ ui->CB_Arsenal_Type->currentData().toString()  +", '"+ ui->LE_Arsenal_CIP->text() +"', "+ ui->CB_Arsenal_Caliber->currentData().toString() +","
                        " '"+ ui->CW_Arsenal->selectedDate().toString("yyyy.MM.dd") +"', '"+ ui->LE_Arsenal_Vendor->text() +"', "+ ui->LE_Arsenal_Length->text() +", "+ ui->CB_Arsenal_Origin->currentData().toString() +")";
            if(sql_query.exec(str_Query))
            {
                DlgWarning->setTitle("Úspěšný vklad");
                DlgWarning->setDescription("Vámi zadaná zbraň byla úspěšně vložena do systému.");
                DlgWarning->exec();
                emit REFRESH();
                this->close();
            } else
            {
                DlgWarning->setTitle("Vyskytla se chyba");
                DlgWarning->setDescription("Vámi zadaná zbraň nebyla vložena do systému.\nZkontrolujte prosím vložené hodnoty");
                DlgWarning->exec();
            }
        }
        if(ui->ACTION->text().toInt()==1){
            str_Query = "UPDATE gapp.arms_owned SET ANAME ='"+ ui->LE_Arsenal_Name->text() +"', ATYPE = "+ ui->CB_Arsenal_Type->currentData().toString() +", CIP = '"+ ui->LE_Arsenal_CIP->text() +"', CALIBER = "+ ui->CB_Arsenal_Caliber->currentData().toString() +", "
                        "DATE_BOUGHT = '"+ ui->CW_Arsenal->selectedDate().toString("yyyy.MM.dd") +"', origin = "+ ui->CB_Arsenal_Origin->currentData().toString() +", SHOP_NAME = '"+ ui->LE_Arsenal_Vendor->text() +"', LENGTH = "+ ui->LE_Arsenal_Length->text() +" "
                        "WHERE (ID = "+ QString::number(ui->WEAPON_ID->text().toInt()) +") ";
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
void dlg_arsenal_addweapon::on_PB_Delete_clicked()
{
        QSqlQuery sql_query;
        QString str_Query;

        DlgYesNo->setTitle("Potvrďte smazání");
        DlgYesNo->setDescription("Opravdu chcete tuto položku smazat?");
        int AskResult = DlgYesNo->exec();
        if(AskResult == QDialog::Accepted)
        {
            str_Query = "DELETE FROM gapp.arms_owned WHERE (ID = "+ QString::number(ui->WEAPON_ID->text().toInt()) +")";
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

