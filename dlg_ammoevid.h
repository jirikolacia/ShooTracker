#ifndef DLG_AMMOEVID_H
#define DLG_AMMOEVID_H

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
class dlg_ammoevid;
}

class dlg_ammoevid : public QDialog
{
    Q_OBJECT

public:
    explicit dlg_ammoevid(QWidget *parent = nullptr);
    ~dlg_ammoevid();

public slots:
    void clearCB();
    void loadCALIBER(QStringList Caliber, QStringList Data);
    void loadMANUFACTURE(QStringList Manufacture, QStringList ManufactureData);
    void loadTYPE(QStringList Type, QStringList TypeData);
    void setTitle(QString Title);
    void NullIndex();

    void enableCB();
    void disableCB();

signals:
      void REFRESH();

private slots:
    void on_PB_Out_clicked();
    void on_PB_In_clicked();

    void on_CB_Caliber_currentTextChanged(const QString &arg1);

    void on_CB_Manufacturer_currentTextChanged(const QString &arg1);

    void on_CB_Type_currentIndexChanged(int index);

private:
    Ui::dlg_ammoevid *ui;

    dlg_warning *DlgWarning;
};

#endif // DLG_AMMOEVID_H
