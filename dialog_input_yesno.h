#ifndef DIALOG_INPUT_YESNO_H
#define DIALOG_INPUT_YESNO_H

#include <QDialog>


namespace Ui {
class DialogInputYN;
}

class DialogInputYN : public QDialog
{
    Q_OBJECT

public:
    explicit DialogInputYN(QWidget *parent = 0);
    ~DialogInputYN();


public slots:
    void setText(QString InfoText);
    void setTitle(QString InfoText);

private:

    Ui::DialogInputYN *ui;

};


#endif // DIALOG_INPUT_YESNO_H

