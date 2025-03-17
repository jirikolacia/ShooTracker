#ifndef DLG_ARSENAL_ADDWEAPON_H
#define DLG_ARSENAL_ADDWEAPON_H

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

#include <dlg_warning.h>
#include <dlg_ask.h>

namespace Ui {
class dlg_arsenal_addweapon;
}

class dlg_arsenal_addweapon : public QDialog
{
    Q_OBJECT

public slots:
    void setTitle(QString Title);
    void setAction(QString Action);
    void setWeaponID(QString WeaponID);
    void checkAll();

private slots:
    void Init();


signals:
      void REFRESH();

public:
    explicit dlg_arsenal_addweapon(QWidget *parent = nullptr);
    ~dlg_arsenal_addweapon();

private slots:
    void on_PB_Shooting_Back_2_clicked();

    void on_PB_Yes_clicked();

    void on_PB_Delete_clicked();

private:
    Ui::dlg_arsenal_addweapon *ui;
    dlg_warning *DlgWarning;
    dlg_ask *DlgYesNo;
};

#endif // DLG_ARSENAL_ADDWEAPON_H
