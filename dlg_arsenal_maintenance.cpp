#include "dlg_arsenal_maintenance.h"
#include "ui_dlg_arsenal_maintenance.h"

dlg_arsenal_maintenance::dlg_arsenal_maintenance(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dlg_arsenal_maintenance)
{
    ui->setupUi(this);
    Init();

}

dlg_arsenal_maintenance::~dlg_arsenal_maintenance()
{
    delete ui;
}

//inicializace upozornění
void dlg_arsenal_maintenance::Init(){
DlgWarning = new dlg_warning(this);
DlgWarning->setGeometry((geometry().width()),(geometry().height()),250,125);
DlgWarning->close();

ui->WeaponID->setVisible(false);
}

//pas ID zbraně
void dlg_arsenal_maintenance::setWeaponID(QString WeaponID){
    ui->WeaponID->setText(WeaponID);
}

//uložení záznamu
void dlg_arsenal_maintenance::on_PB_Yes_clicked()
{

    int CONT=0;
    //fix: nejde zadat title pri udrzbe. OPRAVIT.
    QSqlQuery sql_query;
    QString str_Query;
    if(ui->RB_Complete->isChecked() || ui->RB_Partial->isChecked()){
        //aktualizace poslední kontroly
        str_Query = "UPDATE gapp.arms_owned SET LAST_MAINTENANCE = '"+ ui->calendarWidget->selectedDate().toString("yyyy.MM.dd") +"' WHERE (ID = "+ QString::number(ui->WeaponID->text().toInt()) +");";
        if(sql_query.exec(str_Query)){ CONT++; }


        //zápis pro každý z radiobuttonů
        if(ui->RB_Partial->isChecked())
        {
            str_Query = "INSERT INTO gapp.arms_maintenance_log (MDATE, MTYPE, MARMID) VALUES ('"+ ui->calendarWidget->selectedDate().toString("yyyy.MM.dd") +"', 0, "+ QString::number(ui->WeaponID->text().toInt()) +");";
            if(sql_query.exec(str_Query)){ CONT++; }

        } else {
            str_Query = "INSERT INTO gapp.arms_maintenance_log (MDATE, MTYPE, MARMID) VALUES ('"+ ui->calendarWidget->selectedDate().toString("yyyy.MM.dd") +"', 1, "+ QString::number(ui->WeaponID->text().toInt()) +");";
            if(sql_query.exec(str_Query)){ CONT++; }
        }
        //pokud kontrola proběhne správně (tj. CONT=2), vypíšu hlášku a zavřu okno
            //pokud ne, vypíšu chybovou hlášku a okno nezavřu
        if(CONT==2)
        {
            DlgWarning->setTitle("Údržba zaznamenána");
            DlgWarning->setDescription("Údržba byla zavedena do systému.");
            DlgWarning->exec();
            emit REFRESH(ui->calendarWidget->selectedDate().toString("yyyy.MM.dd"));
            this->close();
        }else {
            DlgWarning->setTitle("Vyskytla se chyba");
            DlgWarning->setDescription("Údržba nebyla zavedena do systému\nVyskytla se chyba.");
            DlgWarning->exec();
        }
    } else {
        DlgWarning->setTitle("Vyskytla se chyba");
        DlgWarning->setDescription("Nevyplnili  jste všechny hodnoty\npotřebné pro vklad záznamu.");
        DlgWarning->exec();
    }
}

//křížek na zavření
void dlg_arsenal_maintenance::on_PB_Maintenance_back_clicked()
{
    this->close();
}

