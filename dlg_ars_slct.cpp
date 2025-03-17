#include "dlg_ars_slct.h"
#include "ui_dlg_ars_slct.h"

dlg_ars_slct::dlg_ars_slct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dlg_ars_slct)
{
    ui->setupUi(this);

    DlgWeaponAttachment = new dlg_arsenal_weapon_attachment(this);
    DlgWeaponAttachment->setGeometry((geometry().width()),(geometry().height()),750,550);
    DlgWeaponAttachment->close();

    connect(DlgWeaponAttachment, SIGNAL(CLOSE()),this,SLOT(Close()));

}

//trosku nesikovne preposilani, signal jde postupne do okna pod kterym je otevreno.
void dlg_ars_slct::Close(){
    qDebug() << "byl zavolán close";
    this->close();
}

dlg_ars_slct::~dlg_ars_slct()
{
    delete ui;
}

void dlg_ars_slct::on_PB_Attachment_back_clicked()
{
    this->close();
}


void dlg_ars_slct::SetWEAPONID(QString WEAPONID){
    ui->WEAPONID->setText(WEAPONID);
}



void dlg_ars_slct::on_PB_Stock_clicked()
{
    DlgWeaponAttachment->setAttachmentType("0");
    DlgWeaponAttachment->setWeapon(ui->WEAPONID->text());
    DlgWeaponAttachment->checkAll();
    DlgWeaponAttachment->exec();
}

void dlg_ars_slct::on_PB_Magazine_clicked()
{
    DlgWeaponAttachment->setAttachmentType("1");
    DlgWeaponAttachment->setWeapon(ui->WEAPONID->text());
    DlgWeaponAttachment->checkAll();
    DlgWeaponAttachment->exec();
}

void dlg_ars_slct::on_PB_Optics_clicked()
{
    DlgWeaponAttachment->setAttachmentType("2");
    DlgWeaponAttachment->setWeapon(ui->WEAPONID->text());
    DlgWeaponAttachment->checkAll();
    DlgWeaponAttachment->exec();
}

void dlg_ars_slct::on_PB_Silencer_clicked()
{
    DlgWeaponAttachment->setAttachmentType("3");
    DlgWeaponAttachment->setWeapon(ui->WEAPONID->text());
    DlgWeaponAttachment->checkAll();
    DlgWeaponAttachment->exec();
}


void dlg_ars_slct::on_PB_Foregrip_clicked()
{
    DlgWeaponAttachment->setAttachmentType("4");
    DlgWeaponAttachment->setWeapon(ui->WEAPONID->text());
    DlgWeaponAttachment->checkAll();
    DlgWeaponAttachment->exec();
}

void dlg_ars_slct::on_PB_PistolGrip_clicked()
{
    DlgWeaponAttachment->setAttachmentType("5");
    DlgWeaponAttachment->setWeapon(ui->WEAPONID->text());
    DlgWeaponAttachment->checkAll();
    DlgWeaponAttachment->exec();
}
