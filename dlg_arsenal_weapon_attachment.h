#ifndef DLG_ARSENAL_WEAPON_ATTACHMENT_H
#define DLG_ARSENAL_WEAPON_ATTACHMENT_H

#include <QDialog>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QRegExp>
#include <QDateTime>
#include <QSettings>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QRegExp>
#include <QListWidgetItem>
#include <QTimer>


#include <dlg_warning.h>
#include <dlg_ask.h>




namespace Ui {
class dlg_arsenal_weapon_attachment;
}

class dlg_arsenal_weapon_attachment : public QDialog
{
    Q_OBJECT

public:
    explicit dlg_arsenal_weapon_attachment(QWidget *parent = nullptr);
    ~dlg_arsenal_weapon_attachment();

signals:
      void CLOSE();

public slots:
    void setWeapon(QString WEAPONID);
    void setAttachmentType(QString ATTACHMENTTYPE);
    void checkAll();

private slots:
    void on_PB_Attachment_back_clicked();
    void on_PB_Save_clicked();
    void on_LW_Attachments_itemClicked(QListWidgetItem *Attachment);


private:
    Ui::dlg_arsenal_weapon_attachment *ui;
    dlg_warning *DlgWarning;
    dlg_ask *DlgYesNo;
};

#endif // DLG_ARSENAL_WEAPON_ATTACHMENT_H
