#ifndef SECONDWIND_H
#define SECONDWIND_H

#include <QDialog>

namespace Ui {
class secondwind;
}

class secondwind : public QDialog
{
    Q_OBJECT

public:
    explicit secondwind(QWidget *parent = nullptr);
    ~secondwind();

private:
    Ui::secondwind *ui;
};

#endif // SECONDWIND_H
