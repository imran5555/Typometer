#ifndef TYPE_IT_H
#define TYPE_IT_H

#include <QMainWindow>

namespace Ui {
class Type_It;
}

class Type_It : public QMainWindow
{
    Q_OBJECT

public:
    explicit Type_It(QWidget *parent = 0);
    ~Type_It();

private slots:
    void on_upload_clicked();
    void on_aboutMe_clicked();
    void on_getRandom_clicked();
    void on_start_clicked();
    void on_giveUp_clicked();
    
private:
    Ui::Type_It *ui;
    int checkErrors();
    void keyPressEvent(QKeyEvent* event);
};

#endif // TYPE_IT_H
