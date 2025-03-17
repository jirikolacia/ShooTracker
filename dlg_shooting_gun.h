#ifndef DLG_SHOOTING_GUN_H
#define DLG_SHOOTING_GUN_H

#include <QDialog>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QRegExp>
#include <QDateTime>
#include <QSettings>
#include <QSqlDatabase>
#include <QSqlQuery>


#include <dlg_warning.h>

namespace Ui {
class dlg_shooting_gun;
}

class dlg_shooting_gun : public QDialog
{
    Q_OBJECT

public:
    explicit dlg_shooting_gun(QWidget *parent = nullptr);
    ~dlg_shooting_gun();

private slots:
    void InitCB();


    void on_pushButton_clicked();
    void CloseThis();

    //void on_CB_Shooting_Gun_activated(const QString &arg1);

public slots:
    void InitArms(QStringList Arms);
    void setOrder(int ID);



private:
    Ui::dlg_shooting_gun *ui;
    dlg_warning *DlgWarning;
};

#endif // DLG_SHOOTING_GUN_H
