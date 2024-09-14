#include "secondwind.h"
#include "ui_secondwind.h"

secondwind::secondwind(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::secondwind)
{
    ui->setupUi(this);
}

secondwind::~secondwind()
{
    delete ui;
}
