#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <dlg_ask.h>
#include <dlg_arsenal_addweapon.h>
#include <dlg_ammoevid.h>
#include <dlg_shooting_range.h>
#include <dlg_arsenal_maintenance.h>
#include <dlg_warning.h>
#include <dlg_attachment.h>
#include <dlg_arsenal_weapon_attachment.h>
#include <dlg_ars_slct.h>




#include <QMainWindow>
#include <QMessageBox>
#include <QTimer>
#include <QDateTime>
#include <QFile>
#include <QDebug>
#include <QTextStream>
#include <QSettings>
#include <QDesktopWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QListWidgetItem>


#include <QtSvg>
#include <QPixmap>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

struct Assisting{
    QStringList ListAssist1;
    QStringList ListAssist2;
    QStringList ListAssist3;
    QString StringAssist;
};



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void AmmoEvidRefresh();
    void Arsenal_WeaponsDate(QString MDate);
    void InitArsenalAttachment(QString WeaponID);


private slots:

    //inity
    void Init();
    void InitAmmoEdit();
    void InitWeapons();
    void InitAttachments();


    //inity (clean)
    void CleanWeaponLabels();
    void CleanAttachmentLabels();

    //disably
    void ArsenalDisable();

    //enably
    void ArsenalEnable();

    //slots dlg
    //void DlgAskYes();
    //void DlgAskNo();


    //push buttons
    void on_PB_Ammo_Back_clicked();
    void on_PB_Ammo_In_clicked();
    void on_PB_Shooting_In_clicked();
    void on_PB_Arsenal_In_clicked();
    void on_PB_Settings_clicked();
    void on_PB_Ranges_clicked();
    void JumpToMenu();
    void on_PB_Shooting_Back_clicked();
    void on_PB_Arsenal_Back_clicked();
    void on_PB_Ranges_Back_clicked();
    void on_PB_Settings_Back_clicked();
    void on_PB_Ammo_Pistol_NewRecord_clicked();
    void on_PB_Ammo_Rifle_NewRecord_clicked();
    void on_PB_Ammo_Shotgun_NewRecord_clicked();
    void on_PB_Ammo_Other_NewRecord_clicked();
    void on_PB_Shooting_NewRecord_clicked();
    void on_PB_Ammo_Smallbore_NewRecord_clicked();

    void on_LW_Arsenal_itemClicked(QListWidgetItem *Weapon);

    void on_PB_Arsenal_NewRecord_clicked();

    void on_PB_Arsenal_EditRecord_clicked();

    void on_PB_Arsenal_MaintenanceNewRecord_clicked();

    void on_PB_Attachment_In_clicked();

    void on_PB_Attachments_Back_clicked();

    void on_LW_Attachments_List_itemClicked(QListWidgetItem *item);


    void on_PB_Attachment_EditRecord_clicked();

    void on_PB_Attachment_NewRecord_clicked();

    void on_PB_Arsenal_Attachments_clicked();

    void on_TE_Arsenal_Notes_textChanged();

    void on_PB_Arsenal_NotesSave_clicked();

private:
    Ui::MainWindow *ui;
    Assisting Ammo;

    dlg_ask *DlgYesNo;
    dlg_ammoevid *DlgAmmoEvid;
    dlg_shooting_range *DlgShootingRange;
    dlg_arsenal_addweapon *DlgAddWeapon;
    dlg_arsenal_maintenance *DlgMaintenance;
    dlg_warning *DlgWarning;
    dlg_attachment *DlgAttachment;
    dlg_arsenal_weapon_attachment *DlgWeaponAttachment;
    dlg_ars_slct *DlgArsSlct;





    QSqlDatabase db;

    QString sHostName;
    int sPort;
    QString sDbName;
    QString sUserName;
    QString sPassword;

    int iPISTOL;
    int iRIFLE;
    int iSHOTGUN;
    int iSMALLBORE;
    int iOTHER;





};
#endif // MAINWINDOW_H
