#ifndef ABOUT_ME_H
#define ABOUT_ME_H

#include<QDialog>

namespace Ui {
class About_Me;
}

class About_Me : public QDialog
{
    Q_OBJECT

public:
    explicit About_Me(QWidget *parent = 0);
    ~About_Me();

private slots:

private:
    Ui::About_Me *ui;
};

#endif // ABOUT_ME_H
