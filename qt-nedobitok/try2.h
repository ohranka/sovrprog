#ifndef TRY2_H
#define TRY2_H

#include <QMainWindow>
#include <QMessageBox>
#include "secondwind.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class try2;
}
QT_END_NAMESPACE

class try2 : public QMainWindow
{
    Q_OBJECT

public:
    try2(QWidget *parent = nullptr);
    ~try2();

private slots:

    void on_pushButton_clicked();

private:
    Ui::try2 *ui;
    secondwind *wind;
};
#endif // TRY2_H
