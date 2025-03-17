#ifndef DLG_SHOOTING_RANGE_H
#define DLG_SHOOTING_RANGE_H

#include <dlg_ask.h>
#include <dlg_shooting_gun.h>

#include <QDialog>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QRegExp>
#include <QDate>
#include <QSettings>
#include <QPalette>
#include <QFileDialog>
#include <QPixmap>
#include <QTemporaryFile>
#include <QSqlDatabase>
#include <QSqlQuery>





namespace Ui {
class dlg_shooting_range;
}

class dlg_shooting_range : public QDialog
{
    Q_OBJECT

public:
    explicit dlg_shooting_range(QWidget *parent = nullptr);
    ~dlg_shooting_range();

signals:
      void REFRESH();

private slots:
    void on_PB_Shooting_Confirm_clicked();

    //void on_PB_Shooting_LoadInvoice_clicked();

    void on_PB_Shooting_LoadPhoto_clicked();
    void on_TE_Footnotes_textChanged();
    void clearShooting();
    void on_PB_Shooting_Back_2_clicked();

private:
    Ui::dlg_shooting_range *ui;

    dlg_ask *DlgYesNo;
    dlg_shooting_gun *DlgShootingGun;


};

#endif // DLG_SHOOTING_RANGE_H
