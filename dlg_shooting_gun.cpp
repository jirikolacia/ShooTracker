#include "dlg_shooting_gun.h"
#include "ui_dlg_shooting_gun.h"

dlg_shooting_gun::dlg_shooting_gun(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dlg_shooting_gun)
{
    ui->setupUi(this);
    InitCB();
    DlgWarning = new dlg_warning(this);
    DlgWarning->setGeometry((geometry().width()),(geometry().height()),250,125);
    DlgWarning->close();
}

dlg_shooting_gun::~dlg_shooting_gun()
{
    delete ui;
}

void dlg_shooting_gun::CloseThis(){

}

void dlg_shooting_gun::InitCB(){
    QStringList ShootingType;
    QStringList Distances;

    Distances << "10m" << "25m" << "50m" << "75m" << "100m" << "125m" << "150m" << "200m" << "250m" << "500m";
    ShootingType << "Kulová" << "Broková" << "Trap / Skeet" << "Projektory";

    ui->CB_Shooting_Type->addItems(ShootingType);
    ui->CB_Shooting_Distance->addItems(Distances);

}


void dlg_shooting_gun::InitArms(QStringList Arms)
{
    for(int  i=0;i<Arms.size();i++){
        ui->CB_Shooting_Gun->addItem(Arms.value(i).split(";").value(1),QVariant::fromValue(Arms.value(i).split(";").value(0).mid(2)));

    }
    ui->CB_Shooting_Gun->setCurrentIndex(-1);
}

//urceni poradi (ID) ze zapis
void dlg_shooting_gun::setOrder(int ID){

    ui->Label_Shooting_ID->setText(QString::number(ID));
    ui->Label_Shooting_ID->setVisible(false);
    //qDebug() << "ID: " << ui->Label_Shooting_ID->text();
}


//udelat to naopak - nevyvolavat okno 5x ale pastnout hodnotu zbrani do labelu ktery bude skryty a for pobezi tady! Po splneni podminek X insertu se okno zavre.


void dlg_shooting_gun::on_pushButton_clicked()
{
    QFile Shooting ("C:/Users/kolacj/Documents/ShooTracker/ShootTrackerShootingRecordsGuns.txt");
    QString Line;
    //qDebug() << ui->CB_Shooting_Gun->currentData().toString();
    int K=0;
    QTextStream stream(&Shooting);
    if(Shooting.open(QIODevice::ReadOnly))
    {
        while (stream.atEnd() == false)
        {
            Line=stream.readLine();
            qDebug() << "Hledam: " << "IDS"+ui->Label_Shooting_ID->text()+";IDGUN"+ui->CB_Shooting_Gun->currentData().toString();
            if(Line.contains("IDS"+ui->Label_Shooting_ID->text()+";IDGUN"+ui->CB_Shooting_Gun->currentData().toString()))
            {
                qDebug() << "Duplicita!";
                DlgWarning->setTitle("Duplicitní záznam");
                DlgWarning->setDescription("Tento záznam již je pro tuto střelbu obsažen.\nZměňte hodnoty. Jedna zbraň nemůže mít dva zápisy");
                DlgWarning->exec();
                K=1;
            }
        }
    }
    if(K==0){
        QFile Records("C:/Users/kolacj/Documents/ShooTracker/ShootTrackerShootingRecordsGuns.txt");
        QTextStream stream2(&Records);
        if(Records.open(QIODevice::Append))
        {
            stream2 << "IDS" << ui->Label_Shooting_ID->text() << ";IDGUN" << ui->CB_Shooting_Gun->currentData().toString() << ";" << ui->CB_Shooting_Distance->currentText() << ";" << ui->CB_Shooting_Gun->currentText() << ";" << ui->CB_Shooting_Type->currentText() << ";" << ui->LE_Shooting_AmmoUsed->text() << ";\n";
            qDebug() << "USPECH";
        }

    }
}

