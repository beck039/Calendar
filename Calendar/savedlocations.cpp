#include "savedlocations.h"
#include "ui_savedlocations.h"

SavedLocations::SavedLocations(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SavedLocations)
{
    ui->setupUi(this);
}

SavedLocations::~SavedLocations()
{
    delete ui;
}

/*void SavedLocations::on_SavedLocation_List_itemDoubleClicked(QListWidgetItem *item) //dont forget to uncomment in .h file
{
    QListWidgetItem *item = ui->listWidget->currentItem();
    SelectedSavedLocation = ui->listWidget->currentItem();
}
*/
