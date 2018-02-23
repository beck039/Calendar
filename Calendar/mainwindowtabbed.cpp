#include "mainwindowtabbed.h"
#include "ui_mainwindowtabbed.h"
#include "dayview.h"

mainWindowTabbed::mainWindowTabbed(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mainWindowTabbed)
{
    ui->setupUi(this);
    this->setWindowTitle("NAME OF OUR APP");
}

mainWindowTabbed::~mainWindowTabbed()
{
    delete ui;
}

void mainWindowTabbed::on_calendarWidget_clicked(const QDate &date)
{
    DayView _dayView; // makes the instance
    _dayView.setModal(true);
    _dayView.exec();
}



void mainWindowTabbed::on_AddEvent_SaveThisLocationButton_clicked()
{
    // Need to create a class SavedLocation so we can save to it and pull address
    // when user wants to auto fill fields with a saved location
}

