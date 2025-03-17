#ifndef DLG_ARSENAL_MAINTENANCE_H
#define DLG_ARSENAL_MAINTENANCE_H

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

namespace Ui {
class dlg_arsenal_maintenance;
}

class dlg_arsenal_maintenance : public QDialog
{
    Q_OBJECT

signals:
      void REFRESH(QString MDate);

public:
    explicit dlg_arsenal_maintenance(QWidget *parent = nullptr);
    ~dlg_arsenal_maintenance();

public slots:
    void setWeaponID(QString WeaponID);

private slots:
    void Init();

    void on_PB_Yes_clicked();

    void on_PB_Maintenance_back_clicked();

private:
    Ui::dlg_arsenal_maintenance *ui;
    dlg_warning *DlgWarning;
};

#endif // DLG_ARSENAL_MAINTENANCE_H
