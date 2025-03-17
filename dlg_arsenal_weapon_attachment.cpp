#include "dlg_arsenal_weapon_attachment.h"
#include "ui_dlg_arsenal_weapon_attachment.h"

dlg_arsenal_weapon_attachment::dlg_arsenal_weapon_attachment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dlg_arsenal_weapon_attachment)
{
    ui->setupUi(this);
    ui->WEAPONID->setVisible(false);
    ui->ATTACHMENT_TYPE->setVisible(false);
    ui->PB_Save->setEnabled(false);
    ui->ATTACHMENTID_ORIGINAL->setVisible(false);


    DlgWarning = new dlg_warning(this);
    DlgWarning->setGeometry((geometry().width()),(geometry().height()),250,125);
    DlgWarning->close();

    DlgYesNo = new dlg_ask(this);
    DlgYesNo->setGeometry((geometry().width()),(geometry().height()),480,230);
    DlgYesNo->close();



}

void dlg_arsenal_weapon_attachment::on_PB_Attachment_back_clicked()
{
    ui->LW_Attachments->clear();
    this->close();
}

dlg_arsenal_weapon_attachment::~dlg_arsenal_weapon_attachment()
{
    delete ui;
}

void dlg_arsenal_weapon_attachment::setWeapon(QString WEAPONID)
{
    ui->WEAPONID->setText(WEAPONID);
}

void dlg_arsenal_weapon_attachment::setAttachmentType(QString ATTACHMENTTYPE){
    ui->ATTACHMENT_TYPE->setText(ATTACHMENTTYPE);
}


void dlg_arsenal_weapon_attachment::checkAll()
{
    ui->LW_Attachments->clear();
    ui->LBL_New_Att->clear();
    ui->LBL_Original_Att->clear();
    QSqlQuery sql_query;
    QString str_Query;
    QString Typ;
    Typ="";


   switch (ui->ATTACHMENT_TYPE->text().toInt())
    {
        case 0: Typ = "ACC_STOCK";          break;
        case 1: Typ = "ACC_MAGAZINE";       break;
        case 2: Typ = "ACC_OPTICS";         break;
        case 3: Typ = "ACC_SILENCER";       break;
        case 4: Typ = "ACC_FOREGRIP";       break;
        case 5: Typ = "ACC_PISTOLGRIP";     break;
    }


   if(ui->ATTACHMENT_TYPE->text()!="" && ui->WEAPONID->text()!="")
   {
       str_Query = "SELECT aoa.ANAME, aoa.MANUFACTURER, aoa.id FROM gapp.arms_owned_attachments aoa, gapp.arms_owned ao WHERE ao."+ Typ +" = aoa.id AND ao.ID="+ QString::number(ui->WEAPONID->text().toInt()) +"";
       qDebug() << "Prvni" << str_Query;
       if(sql_query.exec(str_Query))
       {
            while(sql_query.next())
            {
                ui->LBL_Original_Att->setText(sql_query.value(0).toString()+", "+sql_query.value(1).toString());
                ui->ATTACHMENTID_ORIGINAL->setText(sql_query.value(2).toString());
            }
       }
   }


   //vytvoreni itemu ve widgetu
   int Count=0;
   int P=0;


   str_Query = "SELECT COUNT(ID) FROM gapp.arms_owned_attachments WHERE ATYPE = "+ QString::number(ui->ATTACHMENT_TYPE->text().toInt())+" AND ANAME!='Nic' AND ID!="+ QString::number(ui->ATTACHMENTID_ORIGINAL->text().toInt()) +"";
   qDebug() << "Druhy" << str_Query;
   if(sql_query.exec(str_Query))
   {  while(sql_query.next())
       {
           Count=sql_query.value(0).toInt();
           qDebug() << "Počet:" << Count;
       }
   }

   QListWidgetItem * Attachment[Count];

   for(int i=0;i<Count;i++)
   {
           Attachment[i] = new QListWidgetItem;
   }

   str_Query =     "SELECT ANAME, MANUFACTURER, ID FROM gapp.arms_owned_attachments WHERE ANAME !='Nic' AND ID!="+ QString::number(ui->ATTACHMENTID_ORIGINAL->text().toInt()) +" AND ATYPE = "+ QString::number(ui->ATTACHMENT_TYPE->text().toInt())+" ORDER BY ANAME ASC";

   if(sql_query.exec(str_Query))
   qDebug() << "Treti" << str_Query;
   {  while(sql_query.next())
       {
           Attachment[P]->setText(sql_query.value(0).toString()+", "+sql_query.value(1).toString());
           Attachment[P]->setData(Qt::UserRole, sql_query.value(2).toString());
           ui->LW_Attachments->addItem(Attachment[P]);
           P++;
       }
   }
}


void dlg_arsenal_weapon_attachment::on_LW_Attachments_itemClicked(QListWidgetItem *Attachment)
{
    qDebug() << "Test" << Attachment->text();       qDebug() << "Test data" << Attachment->data(0x0100);

    ui->ATTACHMENTID->setText(Attachment->data(0x0100).toString());
    ui->LBL_New_Att->setText(Attachment->text());
    ui->PB_Save->setEnabled(true);
}

void dlg_arsenal_weapon_attachment::on_PB_Save_clicked()
{

    this->close();

    QString Typ;
    Typ="";
    int kon=0;


   switch (ui->ATTACHMENT_TYPE->text().toInt())
        {
            case 0: Typ = "ACC_STOCK";          break;
            case 1: Typ = "ACC_MAGAZINE";       break;
            case 2: Typ = "ACC_OPTICS";         break;
            case 3: Typ = "ACC_SILENCER";       break;
            case 4: Typ = "ACC_FOREGRIP";       break;
            case 5: Typ = "ACC_PISTOLGRIP";     break;
        }

    QSqlQuery sql_query;
    QString str_Query;

    DlgYesNo->setTitle("Potvrzení");
    DlgYesNo->setDescription("Opravdu chcete příslušenství:\n"+ui->LBL_Original_Att->text()+" změnit za: \n"+ui->LBL_New_Att->text()+"?");
    int AskResult = DlgYesNo->exec();
    if(AskResult == QDialog::Accepted)
    {
        str_Query =     "UPDATE gapp.arms_owned SET "+Typ+" = "+ QString::number(ui->ATTACHMENTID->text().toInt()) +" WHERE (ID="+ QString::number(ui->WEAPONID->text().toInt())+")";
        qDebug() << "Query na update hodnot:" << str_Query;
        if(sql_query.exec(str_Query))
        {
            DlgWarning->setTitle("Úprava proběhla úspěšně");
            DlgWarning->setDescription("Příslušenství Vaší zbraně bylo upraveno");
            DlgWarning->exec();
            kon=1;
            //emit REFRESH();
        }
        else {
            DlgWarning->setTitle("Vyskytla se chyba");
            DlgWarning->setDescription("Vklad nebyl úspěšný.");
            DlgWarning->exec();
        }

    } if(AskResult == QDialog::Rejected)
    { return;
    }


    if(kon==1){
        DlgYesNo->setTitle("Přejete si pokračovat?");
        DlgYesNo->setDescription("Přejete si pokračovat v úpravách\npříslušenství Vaší zbraně?");
        int AskResult = DlgYesNo->exec();
        if(AskResult == QDialog::Accepted)
        {

            //spojit emit se signalem/connectem v mainu - funguje spravne pro prvni init, prod ruhy nikoliv!
            //qDebug() << "emit pass";
            //qDebug() << "Hodnota passu:" << ui->WEAPONID->text();



        } if(AskResult == QDialog::Rejected)
        {
            emit CLOSE();

        }
        //this->close();
    }

    //this->close();

}
