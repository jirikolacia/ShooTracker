#ifndef DLG_ASK_H
#define DLG_ASK_H

#include <QDialog>

namespace Ui {
class dlg_ask;
}

class dlg_ask : public QDialog
{
    Q_OBJECT

signals:
      void REFRESH();

public:
    explicit dlg_ask(QWidget *parent = nullptr);
    ~dlg_ask();

public slots:
    void setTitle(QString Title);
    void setDescription(QString Description);

private slots:
    void on_PB_No_clicked();
    void on_PB_Yes_clicked();

private:
    Ui::dlg_ask *ui;
};

#endif // DLG_ASK_H
