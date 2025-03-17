//   Aplikace    AZAT - evidence mezisklady

/*
 *
 * set icony:
 *
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/attachments/resourcefolder/target.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);



    //napady:

    1.) zakomponovat seznam vystrilenych ran na vlhost trezoru a datum posledniho cisteni - vymyslet:
        1.1.) vzorecek pro ruzne typy streliva
        1.2.) miru afektu klasicke x kompletni kontroly zbrane
        1.3.) zapojeni vlhkomeru s pameti do trezoru jako balicek navic


*/
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->StackWidget->setCurrentIndex(0);
    QTimer::singleShot(2500,this,SLOT(JumpToMenu()));




    Init();
}

MainWindow::~MainWindow()
{
    delete ui;
}
//====================================================================
//Inity
//====================================================================
//init
void MainWindow::Init(){
    //------------------------------------------
    // INI - data
    //------------------------------------------
    QSettings INIsettings("ShootTracker.ini",QSettings::IniFormat);

    ui->LBL_Arsenal_WeaponID->setVisible(false);
    ui->LBL_Attachments_ID->setVisible(false);
    ui->LBL_Ammo_Type->setVisible(false);
    ui->LBL_Arsenal_Charactercount->clear();
    ui->LBL_Arsenal_Notes->setVisible(false);
    ui->LBL_Arsenal_AttachmentIDs->setVisible(false);

    //disable pushbuttonu pred vyberem polozky ze seznamu
    //attachment
    ui->PB_Attachment_EditRecord->setEnabled(false);

    //arsenal
    /*
    ui->PB_Arsenal_EditRecord->setEnabled(false);
    ui->PB_Arsenal_NotesSave->setEnabled(false);
    ui->PB_Arsenal_ServiceAdd->setEnabled(false);
    ui->PB_Arsenal_Attachments->setEnabled(false);
    ui->PB_Arsenal_MaintenanceNewRecord->setEnabled(false);
    */

    sHostName = INIsettings.value("MySQL/HostName").toByteArray();
    sPort = INIsettings.value("MySQL/Port").toByteArray().toInt();
    sDbName = INIsettings.value("MySQL/DbName").toByteArray();
    sUserName = INIsettings.value("MySQL/UserName").toByteArray();
    sPassword = INIsettings.value("MySQL/Password").toByteArray();

    iPISTOL = INIsettings.value("AMMOTYPES/PISTOL").toByteArray().toInt();
    iRIFLE =  INIsettings.value("AMMOTYPES/RIFLE").toByteArray().toInt();
    iSHOTGUN = INIsettings.value("AMMOTYPES/SHOTGUN").toByteArray().toInt();
    iSMALLBORE = INIsettings.value("AMMOTYPES/SMALLBORE").toByteArray().toInt();
    iOTHER = INIsettings.value("AMMOTYPES/OTHER").toByteArray().toInt();

    //***************************************
    // Databases connection
    //***************************************
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(sHostName);
    db.setPort(sPort);
    db.setDatabaseName(sDbName);
    db.setUserName(sUserName);
    db.setPassword(sPassword);

    bool ok = db.open();

    if(db.open())
    {   // spojeni OK
        QString str_Query;
        QSqlQuery sql_query;

        str_Query = "SELECT NOW()";
        if(sql_query.exec(str_Query))
        {

            while(sql_query.next())
           {
                //qDebug() << sql_query.value(0).toString();
           }

        }
    }
    else
    {   //qDebug() << db.lastError();
    }


    DlgYesNo = new dlg_ask(this);
    DlgYesNo->setGeometry((ui->Ammo->geometry().width()/2-50),(ui->Ammo->geometry().height()/2),480,230);
    DlgYesNo->close();

    DlgAmmoEvid = new dlg_ammoevid(this);
    DlgAmmoEvid->setGeometry((geometry().width()),(geometry().height()),500,300);   //240,115
    DlgAmmoEvid->close();

    DlgAddWeapon = new dlg_arsenal_addweapon(this);
    DlgAddWeapon->setGeometry((geometry().width()),(geometry().height()),500,300);   //240,115
    DlgAddWeapon->close();

    DlgMaintenance = new dlg_arsenal_maintenance(this);
    DlgMaintenance->setGeometry((geometry().width()),(geometry().height()),500,300);   //240,115
    DlgMaintenance->close();

    DlgShootingRange = new dlg_shooting_range(this);
    DlgShootingRange->setGeometry((geometry().width()),(geometry().height()),750,750);
    DlgShootingRange->close();

    DlgWarning = new dlg_warning(this);
    DlgWarning->setGeometry((geometry().width()),(geometry().height()),400,300);
    DlgWarning->close();

    DlgAttachment = new dlg_attachment(this);
    DlgAttachment->setGeometry((geometry().width()),(geometry().height()),400,300);
    DlgAttachment->close();

    DlgWeaponAttachment = new dlg_arsenal_weapon_attachment(this);
    DlgWeaponAttachment->setGeometry((geometry().width()),(geometry().height()),480,380);
    DlgWeaponAttachment->close();


    DlgArsSlct = new dlg_ars_slct(this);
    DlgArsSlct->setGeometry((geometry().width()),(geometry().height()),400,300);
    DlgArsSlct->close();




    QTableWidget* AmmoTW = new QTableWidget;
    QTableWidget* AmmoTWCurrent = new QTableWidget;


    for(int i=0;i<5;i++)
         {
           switch (i)
           {     case 0: AmmoTW = ui->TW_Ammo_Pistol;  AmmoTWCurrent = ui->TW_Ammo_Pistol_Current;     qDebug() << i; break;
                 case 1: AmmoTW = ui->TW_Ammo_Rifle;   AmmoTWCurrent = ui->TW_Ammo_Rifle_Current;      qDebug() << i;  break;
                 case 2: AmmoTW = ui->TW_Ammo_Shotgun; AmmoTWCurrent = ui->TW_Ammo_Shotgun_Current;    qDebug() << i;  break;
                 case 3: AmmoTW = ui->TW_Ammo_Smallbore; AmmoTWCurrent = ui->TW_Ammo_Smallbore_Current;    qDebug() << i;  break;
                 case 4: AmmoTW = ui->TW_Ammo_Other;   AmmoTWCurrent = ui->TW_Ammo_Other_Current;      qDebug() << i;  break;
           }

         //pro pohyby
             //date
             AmmoTW->setColumnWidth(0,125);

             //caliber
             AmmoTW->setColumnWidth(1,150);

             //manufacturer
             AmmoTW->setColumnWidth(2,120);

             //munition type
             AmmoTW->setColumnWidth(3,170);

             //amount
             AmmoTW->setColumnWidth(4,70);

             //type of action
             AmmoTW->setColumnWidth(5,70);

         //pro sumarizaci
             //caliber
             AmmoTWCurrent->setColumnWidth(0,100);

             //vyrobce
             AmmoTWCurrent->setColumnWidth(1,100);

             //typ
             AmmoTWCurrent->setColumnWidth(2,50);

             //pocet
             AmmoTWCurrent->setColumnWidth(3,95);
         }

    connect(DlgAmmoEvid, SIGNAL(REFRESH()),this,SLOT(AmmoEvidRefresh()));
    connect(DlgShootingRange, SIGNAL(REFRESH()),this,SLOT(AmmoEvidRefresh()));

    connect(DlgAddWeapon, SIGNAL(REFRESH()),this,SLOT(InitWeapons()));


    connect(DlgMaintenance, SIGNAL(REFRESH(QString)),this,SLOT(Arsenal_WeaponsDate(QString)));
    connect(DlgAttachment, SIGNAL(REFRESH()),this,SLOT(InitAttachments()));

    //connect(DlgArsSlct, SIGNAL(REPEAT(QString)),this,SLOT(InitArsenalAttachment(QString)));








}

//init příslušenství
void MainWindow::InitAttachments(){
    ui->LW_Attachments_List->clear();
    CleanAttachmentLabels();
    QSqlQuery sql_query;
    QString str_Query;
    int Count=0;
    int P=0;


    str_Query = "SELECT COUNT(ID) FROM gapp.arms_owned_attachments WHERE ANAME !='Nic'";
    qDebug() << "attachment 1: " << str_Query;
    if(sql_query.exec(str_Query))
    {  while(sql_query.next())
        {
            Count=sql_query.value(0).toInt();
        }
    }

    QListWidgetItem * Attachment[Count];

    for(int i=0;i<Count;i++)
    {
            Attachment[i] = new QListWidgetItem;
    }

    str_Query =     "SELECT ANAME, ID, ATYPE FROM gapp.arms_owned_attachments WHERE ANAME !='Nic' ORDER BY ANAME ASC";
    qDebug() << "attachment 2: " << str_Query;
    if(sql_query.exec(str_Query))
    {  while(sql_query.next())
        {
            Attachment[P]->setText(sql_query.value(0).toString());
            Attachment[P]->setData(Qt::UserRole, sql_query.value(1).toString()+";"+sql_query.value(2).toString());
            ui->LW_Attachments_List->addItem(Attachment[P]);
            P++;
        }
    }
}

//init edit munice
void MainWindow::InitAmmoEdit(){

    //prvni cast- vymazani CB
    DlgAmmoEvid->clearCB();
    DlgAmmoEvid->disableCB();
    DlgAmmoEvid->NullIndex();

    QSqlQuery sql_query;
    QString str_Query;

    //proces na naplnění CB_Caliber (dlg_ammoevid) kalibry
    QStringList Caliber;
    QStringList CaliberData;


    str_Query = "SELECT ac.CALIBER, ac.id FROM ammo_caliber ac, ammo a WHERE ac.ACTIVE = 1 AND a.caliber=ac.id AND ac.typ = "+ QString::number(ui->tabWidget->currentIndex()) +" GROUP BY ac.CALIBER ";
    if(sql_query.exec(str_Query))
    {  while(sql_query.next())
        {
            Caliber.append(sql_query.value(0).toString());
            CaliberData.append(sql_query.value(1).toString());

        }
    }

    DlgAmmoEvid->loadCALIBER(Caliber, CaliberData);
    DlgAmmoEvid->disableCB();
    DlgAmmoEvid->NullIndex();


    //předání hodnot pro vyvolání dialogového okna na základě otevřeného tabwidgetu s hodnotou
    switch(ui->tabWidget->currentIndex()){

    case 0:
        DlgAmmoEvid->setTitle("Úprava střeliva - pistole");
        break;

    case 1:
        DlgAmmoEvid->setTitle("Úprava střeliva - pušky");
        break;

    case 2:
        DlgAmmoEvid->setTitle("Úprava střeliva - brokovnice");
        break;

    case 3:
        DlgAmmoEvid->setTitle("Úprava střeliva - malorážky");
        break;

    case 4:
        DlgAmmoEvid->setTitle("Úprava střeliva - ostatní");
        break;
    }
}

//init refreshe stavu nábojů
void MainWindow::AmmoEvidRefresh(){
    QSqlQuery sql_query;
    QString str_Query;
    QTableWidget* AmmoTW = new QTableWidget;
    QTableWidget* AmmoTWCurrent = new QTableWidget;


   for(int i=0;i<5;i++)
        {
          switch (i)
          {    case 0: AmmoTW = ui->TW_Ammo_Pistol;    AmmoTWCurrent = ui->TW_Ammo_Pistol_Current;     ui->LBL_Ammo_Type->setText("0");        break;
               case 1: AmmoTW = ui->TW_Ammo_Rifle;     AmmoTWCurrent = ui->TW_Ammo_Rifle_Current;      ui->LBL_Ammo_Type->setText("1");        break;
               case 2: AmmoTW = ui->TW_Ammo_Shotgun;   AmmoTWCurrent = ui->TW_Ammo_Shotgun_Current;    ui->LBL_Ammo_Type->setText("2");        break;
               case 3: AmmoTW = ui->TW_Ammo_Smallbore; AmmoTWCurrent = ui->TW_Ammo_Smallbore_Current;  ui->LBL_Ammo_Type->setText("3");        break;
               case 4: AmmoTW = ui->TW_Ammo_Other;     AmmoTWCurrent = ui->TW_Ammo_Other_Current;      ui->LBL_Ammo_Type->setText("4");        break;
          }

        //vyčištění tabulky
        AmmoTW->clearContents();
        AmmoTW->setRowCount(0);

        AmmoTWCurrent->clearContents();
        AmmoTWCurrent->setRowCount(0);


        //Definice barvy pro pozadí - pro celkem řádek
        //lichý řádek
        QColor OddRow;
        OddRow.setRgb(192,192,192);
        OddRow.setAlpha(150);

        //vklad
        QColor In;
        OddRow.setRgb(58,205,37);
        OddRow.setAlpha(15);

        //odběr
        QColor Out;
        OddRow.setRgb(226,16,89);
        OddRow.setAlpha(15);

        //vklad a odběr
        int p=0;
        str_Query =     "SELECT ae.MDATE, ac.CALIBER, am.mname, atp.typ, ae.amount, ae.statusIO FROM ammo_evid ae, ammo a, ammo_caliber ac, ammo_manufacturer am, ammo_type atp ";
        str_Query +=    "WHERE a.caliber=ac.id AND a.typ=atp.id AND a.manufacturer = am.id AND ae.ammoid = a.id AND ac.typ="+ QString::number(i) +" ";
        if(sql_query.exec(str_Query))
        {  while(sql_query.next())
            {
                AmmoTW->insertRow(p);
                AmmoTW->setItem(p,0, new QTableWidgetItem(sql_query.value(0).toString()));
                AmmoTW->setItem(p,1, new QTableWidgetItem(sql_query.value(1).toString()));
                AmmoTW->setItem(p,2, new QTableWidgetItem(sql_query.value(2).toString()));
                AmmoTW->setItem(p,3, new QTableWidgetItem(sql_query.value(3).toString()));
                AmmoTW->setItem(p,4, new QTableWidgetItem(sql_query.value(4).toString()));

                //podmínka pro vklad
                if(sql_query.value(5).toInt()==1){  AmmoTW->setItem(p,5, new QTableWidgetItem("Vklad")); }

                //podmínka pro odběr
                if(sql_query.value(5).toInt()==0){  AmmoTW->setItem(p,5, new QTableWidgetItem("Odběr")); }


                AmmoTW->item(p,0)->setTextAlignment(Qt::AlignCenter);
                AmmoTW->item(p,1)->setTextAlignment(Qt::AlignCenter);
                AmmoTW->item(p,2)->setTextAlignment(Qt::AlignCenter);
                AmmoTW->item(p,3)->setTextAlignment(Qt::AlignCenter);
                AmmoTW->item(p,4)->setTextAlignment(Qt::AlignCenter);
            }
        }



        //shrnutí current
        int pom=0;
        str_Query = "SELECT ac.caliber, am.MNAME, atp.typ, a.amount "
                    "FROM gapp.ammo a, gapp.ammo_caliber ac, gapp.ammo_manufacturer am, gapp.ammo_type atp "
                    "WHERE a.typ = atp.id AND a.caliber = ac.id AND am.id=a.manufacturer AND ac.typ= "+ QString::number(ui->LBL_Ammo_Type->text().toInt()) +" AND amount != 0";

        if(sql_query.exec(str_Query))
        {  while(sql_query.next())
            {
                //raze, vyrobce, typ, pocet
                AmmoTWCurrent->insertRow(pom);
                AmmoTWCurrent->setItem(pom,0, new QTableWidgetItem(sql_query.value(0).toString()));
                AmmoTWCurrent->setItem(pom,1, new QTableWidgetItem(sql_query.value(1).toString()));
                AmmoTWCurrent->setItem(pom,2, new QTableWidgetItem(sql_query.value(2).toString()));
                AmmoTWCurrent->setItem(pom,3, new QTableWidgetItem(sql_query.value(3).toString()));

                AmmoTWCurrent->item(pom,0)->setTextAlignment(Qt::AlignCenter);
                AmmoTWCurrent->item(pom,1)->setTextAlignment(Qt::AlignCenter);
                AmmoTWCurrent->item(pom,2)->setTextAlignment(Qt::AlignCenter);
                AmmoTWCurrent->item(pom,3)->setTextAlignment(Qt::AlignCenter);
                pom++;
            }
        }


        //nacteni ruznych razi, sjednoceni s poctem
        for(int k=0;k<AmmoTW->rowCount();k++)
        {
            if(k%2!=0)
            {
                AmmoTW->item(k,0)->setBackground(OddRow);
                AmmoTW->item(k,1)->setBackground(OddRow);
                AmmoTW->item(k,2)->setBackground(OddRow);
                AmmoTW->item(k,3)->setBackground(OddRow);
                AmmoTW->item(k,4)->setBackground(OddRow);
                AmmoTW->item(k,5)->setBackground(OddRow);
            }
        }
    }
}



//---------------------------
// Uvod -> Menu
//---------------------------
void MainWindow::JumpToMenu()
{
    ui->StackWidget->setCurrentIndex(1);
}


//====================================================================
//                          Tlacitka DO WIDGETU
//====================================================================
//---------------------------
// Menu -> Strelivo
//---------------------------
void MainWindow::on_PB_Ammo_In_clicked()
{
    AmmoEvidRefresh();
    ui->StackWidget->setCurrentIndex(2);
}

//---------------------------
// Menu -> Strelby
//---------------------------
void MainWindow::on_PB_Shooting_In_clicked()
{
    ui->StackWidget->setCurrentIndex(3);
}

//---------------------------
// Menu -> Arzenal
//---------------------------
void MainWindow::on_PB_Arsenal_In_clicked()
{
    CleanWeaponLabels();
    ArsenalDisable();
    ui->StackWidget->setCurrentIndex(4);
    InitWeapons();
}

//---------------------------
// Menu -> Strelnice
//---------------------------
void MainWindow::on_PB_Ranges_clicked()
{
    ui->StackWidget->setCurrentIndex(5);
}

//---------------------------
// Menu -> Nastaveni
//---------------------------
void MainWindow::on_PB_Settings_clicked()
{
    ui->StackWidget->setCurrentIndex(6);
}

//---------------------------
// Menu -> Příslušenství
//---------------------------
void MainWindow::on_PB_Attachment_In_clicked()
{
    InitAttachments();
    ui->StackWidget->setCurrentIndex(7);
}


//====================================================================
//                          Tlacitka ZPET
//====================================================================

//---------------------------
// Strelivo -> Menu
//---------------------------
void MainWindow::on_PB_Ammo_Back_clicked()
{
    ui->StackWidget->setCurrentIndex(1);
    QTableWidget* AmmoTW = new QTableWidget;
    for(int i=0;i<5;i++)
    {
           switch (i)
           {    case 0: AmmoTW = ui->TW_Ammo_Pistol;    break;
                case 1: AmmoTW = ui->TW_Ammo_Rifle;     break;
                case 2: AmmoTW = ui->TW_Ammo_Shotgun;   break;
                case 3: AmmoTW = ui->TW_Ammo_Smallbore; break;
                case 4: AmmoTW = ui->TW_Ammo_Other;      break;
           }
           //qDebug() << "Pocet radku " << " pred:" << AmmoTW->rowCount();
           AmmoTW->clear();
           AmmoTW->setRowCount(0);
           //qDebug() << "Pocet radku po:" << AmmoTW->rowCount();
   }
}

//---------------------------
// Strelby -> Menu
//---------------------------
void MainWindow::on_PB_Shooting_Back_clicked()
{
    ui->StackWidget->setCurrentIndex(1);
}

//---------------------------
// Arzenal -> Menu
//---------------------------
void MainWindow::on_PB_Arsenal_Back_clicked()
{

    ArsenalDisable();
    ui->StackWidget->setCurrentIndex(1);
    CleanWeaponLabels();
}



//---------------------------
// Strelnice -> Menu
//---------------------------
void MainWindow::on_PB_Ranges_Back_clicked()
{
    ui->StackWidget->setCurrentIndex(1);
}

//---------------------------
// Nastaveni -> Menu
//---------------------------
void MainWindow::on_PB_Settings_Back_clicked()
{
    ui->StackWidget->setCurrentIndex(1);
}

//---------------------------
//Příslušenství -> Menu
//---------------------------
void MainWindow::on_PB_Attachments_Back_clicked()
{
    ui->PB_Attachment_EditRecord->setEnabled(false);
    ui->StackWidget->setCurrentIndex(1);
    CleanAttachmentLabels();
}


//====================================================================
//                          Dialogova okna
//====================================================================
//---------------------------
// Strelivo -> novy zaznam
//---------------------------
        //To do: misto 6ti funkci sjednotit do jedne, predavat dynamicky
void MainWindow::on_PB_Ammo_Pistol_NewRecord_clicked()
{
    InitAmmoEdit();
    DlgAmmoEvid->exec();


}

void MainWindow::on_PB_Ammo_Rifle_NewRecord_clicked()
{
    InitAmmoEdit();
    DlgAmmoEvid->exec();
}

void MainWindow::on_PB_Ammo_Shotgun_NewRecord_clicked()
{
    InitAmmoEdit();
    DlgAmmoEvid->exec();
}

void MainWindow::on_PB_Ammo_Smallbore_NewRecord_clicked()
{
    InitAmmoEdit();
    DlgAmmoEvid->exec();
}

void MainWindow::on_PB_Ammo_Other_NewRecord_clicked()
{
    InitAmmoEdit();
    DlgAmmoEvid->exec();
}

void MainWindow::on_PB_Shooting_NewRecord_clicked()
{
    DlgShootingRange->exec();
}



//to do list:

    //smazání záznamu příslušenství
        //hotovo

    //smazání záznamu zbraně
        //hotovo

    //opravit ikonu, nastavit NATRVALO
        //

    //spravování příslušenství u zbraní
        //

    //servisní zásahy zbraní a příslušenství
        //

    //poznámky zbraní
        //

    //správa střeleb
        //

    //správa střelnice
        //


    //prepracovat ammo refresh postup, udelat tabulku sql stav ted, kde budu mit jednotlive zbrane
        //hotovo

//====================================================================
//Widget - Arzenál
//====================================================================

void MainWindow::ArsenalDisable()
{
    ui->PB_Arsenal_EditRecord->setEnabled(false);
    ui->PB_Arsenal_NotesSave->setEnabled(false);
    ui->PB_Arsenal_ServiceAdd->setEnabled(false);
    ui->PB_Arsenal_Attachments->setEnabled(false);
    ui->PB_Arsenal_MaintenanceNewRecord->setEnabled(false);

    ui->LW_Arsenal_Attachments->setEnabled(false);
    ui->TE_Arsenal_Notes->setEnabled(false);
    ui->LW_Arsenal_Service->setEnabled(false);

}

void MainWindow::ArsenalEnable()
{
    ui->PB_Arsenal_EditRecord->setEnabled(true);
    ui->PB_Arsenal_NotesSave->setEnabled(true);
    ui->PB_Arsenal_ServiceAdd->setEnabled(true);
    ui->PB_Arsenal_Attachments->setEnabled(true);
    ui->PB_Arsenal_MaintenanceNewRecord->setEnabled(true);

    ui->LW_Arsenal_Attachments->setEnabled(true);
    ui->TE_Arsenal_Notes->setEnabled(true);
    ui->LW_Arsenal_Service->setEnabled(true);

}

//init zbraní
void MainWindow::InitWeapons(){
    ui->LW_Arsenal->clear();
    QSqlQuery sql_query;
    QString str_Query;
    int Count=0;
    int P=0;


    str_Query = "SELECT COUNT(ID) FROM gapp.arms_owned";
    if(sql_query.exec(str_Query))
    {  while(sql_query.next())
        {
            Count=sql_query.value(0).toInt();
        }
    }

    QListWidgetItem * Weapon[Count];

    for(int i=0;i<Count;i++)
    {
            Weapon[i] = new QListWidgetItem;
    }

    str_Query =     "SELECT ANAME, ID FROM gapp.arms_owned ORDER BY ANAME ASC";
    if(sql_query.exec(str_Query))
    {  while(sql_query.next())
        {
            Weapon[P]->setText(sql_query.value(0).toString());
            Weapon[P]->setData(Qt::UserRole, sql_query.value(1).toString());
            ui->LW_Arsenal->addItem(Weapon[P]);
            P++;
        }
    }
}

//vyčištění textu pro: zbraně
void MainWindow::CleanWeaponLabels(){
    ui->LW_Arsenal->clear();
    ui->LBL_Arsenal_Date_Bought->setText("");
    ui->LBL_Arsenal_Name->setText("");
    ui->LBL_Arsenal_Vendor->setText("");
    ui->LBL_Arsenal_Origin->setText("");
    ui->LBL_Arsenal_Length->setText("");
    ui->LBL_Arsenal_CIP->setText("");
    ui->LBL_Arsenal_Caliber->setText("");
    ui->LBL_Arsenal_Category->setText("");
    ui->LBL_Arsenal_Shots_Fired->setText("");
    ui->LBL_Arsenal_Date_Maintenance->setText("");
    ui->LW_Arsenal_Service->clear();
    ui->LW_Arsenal_Service->clear();
}

//pastnutí signálu na propis data po změně data údržby
void MainWindow::Arsenal_WeaponsDate(QString MDate){
    ui->LBL_Arsenal_Date_Maintenance->setText(MDate);
}

//onchange změna detailů o zbrani
void MainWindow::on_LW_Arsenal_itemClicked(QListWidgetItem *Weapon)
{
    ArsenalEnable();

    qDebug() << "Test" << Weapon->text();       qDebug() << "Test data" << Weapon->data(0x0100);
    //0x0100 == ID / DATA :-)

    QSqlQuery sql_query;
    QString str_Query;


    ui->LBL_Arsenal_WeaponID->setText(Weapon->data(0x0100).toString());

    //vytvorit funkcionalitu pro:
        //1.) seznam servisnich zasahu
        //2.) poznamky ke zbrani
            //2.1.) zobrazeni a kalkulace znaku X
            //2.2.) update/ulozeni po kliknuti  X
        //3.) prehled prislusenstvi - obycejny qwidget view co te odkaze po rozkliku na simple info o konkretnim attachmentu
            //vytvorit budto info okno o prislusenstvi nebo vyuzit existujici
                //3.X) Jit jinou cestou - vyvolat standardni okno na vymenu ALE ve widgetu s vymenami si muzu rozkliknout dvojklikem danou vec a tu pripadne pozmenit.
        //4.) zakomponovat seznam vystrilenych ran


    /*
SELECT ao.aname, atp.zp_class, ac.caliber, ao.date_bought, ao.shop_name, ao.origin, ao.length, ao.cip, ao.shots_fired, ao.last_maintenance
FROM gapp.arms_owned ao, gapp.ammo_caliber ac, gapp.arms_types atp
WHERE ao.caliber = ac.id AND ao.atype = atp.id AND ID =
    */
    str_Query =     "SELECT ao.aname, atp.zp_class, ac.caliber, ao.date_bought, ao.shop_name, st.state_full, ao.length, ao.cip, ao.shots_fired, ao.last_maintenance, ao.note, ao.ACC_FOREGRIP, ao.ACC_STOCK, ao.ACC_MAGAZINE, ao.ACC_OPTICS, ao.ACC_SILENCER, ao.ACC_PISTOLGRIP "
                    "FROM gapp.states st, gapp.arms_owned ao, gapp.ammo_caliber ac, gapp.arms_types atp WHERE ao.caliber = ac.id AND ao.atype = atp.id AND ao.ID = "+ Weapon->data(0x0100).toString() +" AND ao.origin = st.id";
    //qDebug() << "Query: " << str_Query;

    //vypis dat pro konkretni zbran
    if(sql_query.exec(str_Query))
    {  while(sql_query.next())
        {
            ui->LBL_Arsenal_Name->setText(sql_query.value(0).toString());
            ui->LBL_Arsenal_Category->setText(sql_query.value(1).toString());
            ui->LBL_Arsenal_Caliber->setText(sql_query.value(2).toString());
            ui->LBL_Arsenal_Date_Bought->setText(sql_query.value(3).toString());
            ui->LBL_Arsenal_Vendor->setText(sql_query.value(4).toString());
            ui->LBL_Arsenal_Origin->setText(sql_query.value(5).toString());
            ui->LBL_Arsenal_Length->setText(sql_query.value(6).toString());
            ui->LBL_Arsenal_CIP->setText(sql_query.value(7).toString());
            ui->LBL_Arsenal_Shots_Fired->setText(sql_query.value(8).toString());
            ui->LBL_Arsenal_Date_Maintenance->setText(sql_query.value(9).toString());
            ui->TE_Arsenal_Notes->setText(sql_query.value(10).toString());
            ui->LBL_Arsenal_Notes->setText(sql_query.value(10).toString());
            ui->LBL_Arsenal_AttachmentIDs->setText(sql_query.value(11).toString()+";"+sql_query.value(12).toString()+";"+sql_query.value(13).toString()+";"+sql_query.value(14).toString()+";"+sql_query.value(15).toString()+";"+sql_query.value(16).toString());
        }
    }
    qDebug() << ui->LBL_Arsenal_AttachmentIDs->text();



    QListWidgetItem * Attachment[5];

    ui->LW_Arsenal_Attachments->clear();


    int ID=0;
    for(int i=0;i<5;i++){
        switch (i)
        {       case 0: ID=ui->LBL_Arsenal_AttachmentIDs->text().split(";").value(0).toInt(); Attachment[i] = new QListWidgetItem;      qDebug() << i; break;
                case 1: ID=ui->LBL_Arsenal_AttachmentIDs->text().split(";").value(1).toInt(); Attachment[i] = new QListWidgetItem;      qDebug() << i;  break;
                case 2: ID=ui->LBL_Arsenal_AttachmentIDs->text().split(";").value(2).toInt(); Attachment[i] = new QListWidgetItem;      qDebug() << i;  break;
                case 3: ID=ui->LBL_Arsenal_AttachmentIDs->text().split(";").value(3).toInt(); Attachment[i] = new QListWidgetItem;      qDebug() << i;  break;
                case 4: ID=ui->LBL_Arsenal_AttachmentIDs->text().split(";").value(4).toInt(); Attachment[i] = new QListWidgetItem;      qDebug() << i;  break;
                case 5: ID=ui->LBL_Arsenal_AttachmentIDs->text().split(";").value(5).toInt(); Attachment[i] = new QListWidgetItem;      qDebug() << i;  break;
        }

        str_Query =     "SELECT aoa.aname, aoa.manufacturer, aoa.id "
                        "FROM gapp.arms_owned_attachments aoa WHERE aoa.ID="+ QString::number(ID) +"";
        qDebug() << "Query: " << i << " " << str_Query;

        if(sql_query.exec(str_Query))
        {
            while(sql_query.next())
            {
                //1-6 dodělat podmínky! program padá

                Attachment[i]->setText(sql_query.value(0).toString()+" "+sql_query.value(1).toString());
                Attachment[i]->setData(Qt::UserRole, sql_query.value(2).toString());
                ui->LW_Arsenal_Attachments->addItem(Attachment[i]);
                if((sql_query.value(2).toString().toInt()==1) || (sql_query.value(2).toString().toInt()==2) || (sql_query.value(2).toString().toInt()==3) || (sql_query.value(2).toString().toInt()==4) || (sql_query.value(2).toString().toInt()==5)){
                    qDebug() << "Empty!";
                    Attachment[i]->setHidden(true);
                }
            }
        }

    }


}

//nový záznam
void MainWindow::on_PB_Arsenal_NewRecord_clicked()
{
    //postup:
        //nastavení titulu, typu akce (0=nová), iniciování checkall -> kontrola vepsaných hodnot, spuštění
    DlgAddWeapon->setTitle("Nový záznam zbraně");
    DlgAddWeapon->setAction("0");
    DlgAddWeapon->checkAll();
    DlgAddWeapon->exec();
}

//úprava existujícího záznamu
void MainWindow::on_PB_Arsenal_EditRecord_clicked()
{
    //postup:
        //nastavení titulu, typu akce (1=existující), iniciování checkall -> kontrola vepsaných hodnot, načtení údajů o zbrani, spuštění
    DlgAddWeapon->setTitle("Úprava existující zbraně");
    DlgAddWeapon->setAction("1");
    DlgAddWeapon->setWeaponID(ui->LBL_Arsenal_WeaponID->text());
    DlgAddWeapon->checkAll();
    DlgAddWeapon->exec();
}

//provést záznam údržby
void MainWindow::on_PB_Arsenal_MaintenanceNewRecord_clicked()
{
    if(ui->LBL_Arsenal_WeaponID->text()!=""){
    DlgMaintenance->setWeaponID(ui->LBL_Arsenal_WeaponID->text());
    DlgMaintenance->exec();
    } else {
        DlgWarning->setTitle("Nebyla vybrána zbraň");
        DlgWarning->setDescription("Nevybrali jste zbraň, které chcete\npřiřadit záznam o údržbě.\nVyberte ji z levého seznamu.");
        DlgWarning->exec();
    }
}

//správa příslušenství pro zbraně
void MainWindow::on_PB_Arsenal_Attachments_clicked()
{
    //InitArsenalAttachment(ui->LBL_Arsenal_WeaponID->text());
    DlgArsSlct->SetWEAPONID(ui->LBL_Arsenal_WeaponID->text());
    DlgArsSlct->exec();

    /*
    DlgWeaponAttachment->setWeapon(ui->LBL_Arsenal_WeaponID->text());
    DlgWeaponAttachment->checkAll();
    DlgWeaponAttachment->exec();
    */

}

//init okna s attachmentem
void MainWindow::InitArsenalAttachment(QString WEAPONID){
    qDebug() << "Id zbrane2: " << WEAPONID;
    DlgArsSlct->SetWEAPONID(WEAPONID);
    DlgArsSlct->exec();
}

//počítadlo znaků poznámky
void MainWindow::on_TE_Arsenal_Notes_textChanged()
{
    int Amount=0;
    Amount=ui->TE_Arsenal_Notes->toPlainText().length();

    ui->LBL_Arsenal_Charactercount->setText(QString::number(Amount)+" z 255");

    if(ui->TE_Arsenal_Notes->toPlainText().length()>255){
        QLabel *le = new QLabel();
        le = ui->LBL_Arsenal_Charactercount;
        le->setStyleSheet("QLabel { background: rgb(237,28,36);}");


    } else {
        QLabel *le = new QLabel();
        le = ui->LBL_Arsenal_Charactercount;
        le->setStyleSheet("QLabel { background: rgb(57, 169, 255);}");
    }
}

//uložení poznámky
void MainWindow::on_PB_Arsenal_NotesSave_clicked()
{

    if(ui->TE_Arsenal_Notes->toPlainText().length()<=255 && ui->LBL_Arsenal_Notes->text()!=ui->TE_Arsenal_Notes->toPlainText())
    {

    QSqlQuery sql_query;
    QString str_Query;

    str_Query = "UPDATE gapp.arms_owned SET NOTE = '" + ui->TE_Arsenal_Notes->toPlainText() + "' WHERE (ID = " + QString::number(ui->LBL_Arsenal_WeaponID->text().toInt()) +")";
    qDebug() << str_Query;
    if(sql_query.exec(str_Query))
    {
            DlgWarning->setTitle("Poznámka uložena.");
            DlgWarning->setDescription("");
            DlgWarning->exec();
    }

    } else {
        DlgWarning->setTitle("Chyba!");
        DlgWarning->setDescription("Zkontrolujte délku znaků poznámky,\nnebo se Vaše poznámka neliší od původní.");
        DlgWarning->exec();
    }

}




//====================================================================
//Widget - Příslušenství
//====================================================================

//vyčištění textu pro: příslušenství
void MainWindow::CleanAttachmentLabels(){

    ui->LBL_Attachments_AttachmentName->setText("");
    ui->LBL_Attachments_Manufacturer->setText("");
    ui->LBL_Attachments_SN->setText("");
    ui->LBL_Attachments_Origin->setText("");
    ui->LBL_Attachments_Price->setText("");
    ui->LBL_Attachments_Date_Bought->setText("");
    ui->LBL_Attachments_Vendor->setText("");
    ui->LBL_Attachments_Type->setText("");
}

//proklik příslušenství
void MainWindow::on_LW_Attachments_List_itemClicked(QListWidgetItem *Attachment)
{
    ui->PB_Attachment_EditRecord->setEnabled(true);

    qDebug() << "Test" << Attachment->text();
    //0x0100 == ID / DATA :-)
    qDebug() << "Test data" << Attachment->data(0x0100);


    QLabel* TypeIcon    = new QLabel;
    QLabel* Type        = new QLabel;

    TypeIcon    = ui->LBL_Attachments_Icon;
    Type        = ui->LBL_Attachments_Type;
    QSqlQuery sql_query;
    QString str_Query;


    ui->LBL_Attachments_ID->setText(Attachment->data(0x0100).toString().split(";").value(0));

    QString path;
    switch(Attachment->data(0x0100).toString().split(";").value(1).toInt())
    {
        case 0: path = ":/attachments/resourcefolder/attachments/stock.png";            Type->setText("Pažba");         break;
        case 1: path = ":/attachments/resourcefolder/attachments/magazine50.png";       Type->setText("Zásobník");        break;
        case 2: path = ":/attachments/resourcefolder/attachments/scope.png";            Type->setText("Optika");          break;
        case 3: path = ":/attachments/resourcefolder/attachments/silencer.png";         Type->setText("Tlumič");          break;
        case 4: path = ":/attachments/resourcefolder/attachments/foregrip.png";         Type->setText("Grip podpažbí");   break;
        case 5: path = ":/attachments/resourcefolder/attachments/pistol_stock.png";     Type->setText("Pažbička");        break;
    }

    QPixmap ikona(path);
    ikona = ikona.scaled(250,250, Qt::KeepAspectRatioByExpanding);
    TypeIcon->setPixmap(ikona);
    ui->LBL_Attachments_Icon->setScaledContents(true);
    ui->LBL_Attachments_Icon->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    str_Query =     "SELECT aoa.ANAME, aoa.MANUFACTURER, aoa.SN, st.state_full, aoa.PRICE, aoa.DATE_BOUGHT, aoa.VENDOR, aoa.ORIGIN FROM gapp.arms_owned_attachments aoa, gapp.states st WHERE aoa.ID = "+ Attachment->data(0x0100).toString().split(";").value(0) +" AND st.ID = aoa.ORIGIN";
    //qDebug() << "Query: " << str_Query;

    //vypis dat pro konkretni zbran
    if(sql_query.exec(str_Query))
    {  while(sql_query.next())
        {
            ui->LBL_Attachments_AttachmentName->setText(sql_query.value(0).toString());
            ui->LBL_Attachments_Manufacturer->setText(sql_query.value(1).toString());
            ui->LBL_Attachments_SN->setText(sql_query.value(2).toString());
            ui->LBL_Attachments_Origin->setText(sql_query.value(3).toString());
            ui->LBL_Attachments_Price->setText(sql_query.value(4).toString());
            ui->LBL_Attachments_Date_Bought->setText(sql_query.value(5).toString());
            ui->LBL_Attachments_Vendor->setText(sql_query.value(6).toString());

        }
    }
}

//nový záznam příslušenství
void MainWindow::on_PB_Attachment_NewRecord_clicked()
{
    //postup:
        //nastavení titulu, typu akce (0=nová), iniciování checkall -> kontrola vepsaných hodnot, spuštění
    DlgAttachment->setTitle("Nový záznam zbraně");
    DlgAttachment->setAction("0");
    DlgAttachment->checkAll();
    DlgAttachment->exec();
}

//úprava příslušenství
void MainWindow::on_PB_Attachment_EditRecord_clicked()
{
    //postup:
        //nastavení titulu, typu akce (1=existující), iniciování checkall -> kontrola vepsaných hodnot, načtení údajů o zbrani, spuštění
    DlgAttachment->setTitle("Úprava existující zbraně");
    DlgAttachment->setAction("1");
    DlgAttachment->setAttachmentID(ui->LBL_Attachments_ID->text());
    qDebug() << "LBL attachment id:" << ui->LBL_Attachments_ID->text();
    DlgAttachment->checkAll();
    DlgAttachment->exec();

}












