#ifndef DLG_ATTACHMENT_H
#define DLG_ATTACHMENT_H

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
class dlg_attachment;
}

class dlg_attachment : public QDialog
{
    Q_OBJECT

public:
    explicit dlg_attachment(QWidget *parent = nullptr);
    ~dlg_attachment();

public slots:
    void setTitle(QString Title);
    void setAction(QString Action);
    void setAttachmentID(QString AttachmentID);
    void checkAll();

private slots:
    void clear();


signals:
      void REFRESH();

private slots:
    void Init();


    void on_PB_Attachment_Back_clicked();

    void on_PB_Yes_clicked();

    void on_PB_Delete_clicked();

private:
    Ui::dlg_attachment *ui;
    dlg_warning *DlgWarning;
    dlg_ask *DlgYesNo;
};

#endif // DLG_ATTACHMENT_H
