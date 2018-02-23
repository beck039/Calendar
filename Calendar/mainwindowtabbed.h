#ifndef MAINWINDOWTABBED_H
#define MAINWINDOWTABBED_H

#include <QDialog>

namespace Ui {
class mainWindowTabbed;
}

class mainWindowTabbed : public QDialog
{
    Q_OBJECT

public:
    explicit mainWindowTabbed(QWidget *parent = 0);
    ~mainWindowTabbed();

private slots:
    void on_calendarWidget_clicked(const QDate &date);

    void on_AddEvent_SaveThisLocationButton_clicked();

private:
    Ui::mainWindowTabbed *ui;
};

#endif // MAINWINDOWTABBED_H
