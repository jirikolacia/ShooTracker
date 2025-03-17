#ifndef DLG_WARNING_H
#define DLG_WARNING_H

#include <QDialog>

namespace Ui {
class dlg_warning;
}

class dlg_warning : public QDialog
{
    Q_OBJECT

public:
    explicit dlg_warning(QWidget *parent = nullptr);
    ~dlg_warning();

public slots:
    void setTitle(QString Title);
    void setDescription(QString Description);

private slots:
    void on_PB_OK_clicked();


private:
    Ui::dlg_warning *ui;
};

#endif // DLG_WARNING_H
