#include "dlg_ask.h"
#include "ui_dlg_ask.h"

dlg_ask::dlg_ask(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dlg_ask)
{
    ui->setupUi(this);
}

dlg_ask::~dlg_ask()
{
    delete ui;
}

//nastavení titulku
void dlg_ask::setTitle(QString Title){
    ui->label_title->setText(Title);
}

//nastavení popisu
void dlg_ask::setDescription(QString Description){
    ui->label_text->setText(Description);
}

//klik "ANO"
void dlg_ask::on_PB_Yes_clicked()
{
    this->accept();
}

//klik "NE"
void dlg_ask::on_PB_No_clicked()
{
    this->reject();
}




