#ifndef DLG_ARS_SLCT_H
#define DLG_ARS_SLCT_H

#include <QDialog>
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

#include <dlg_arsenal_weapon_attachment.h>


namespace Ui {
class dlg_ars_slct;
}

class dlg_ars_slct : public QDialog
{
    Q_OBJECT


public:
    explicit dlg_ars_slct(QWidget *parent = nullptr);
    ~dlg_ars_slct();

public slots:
    void SetWEAPONID(QString WEAPONID);


private slots:
    void on_PB_Stock_clicked();
    void on_PB_Silencer_clicked();
    void on_PB_Magazine_clicked();
    void on_PB_PistolGrip_clicked();
    void on_PB_Optics_clicked();
    void on_PB_Foregrip_clicked();
    void on_PB_Attachment_back_clicked();
    void Close();


private:
    Ui::dlg_ars_slct *ui;
    dlg_arsenal_weapon_attachment *DlgWeaponAttachment;

};

#endif // DLG_ARS_SLCT_H
