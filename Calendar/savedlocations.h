#ifndef SAVEDLOCATIONS_H
#define SAVEDLOCATIONS_H

#include <QDialog>

namespace Ui {
class SavedLocations;
}

class SavedLocations : public QDialog
{
    Q_OBJECT

public:
    explicit SavedLocations(QWidget *parent = 0);
    ~SavedLocations();

private slots:
   // void on_SavedLocation_List_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::SavedLocations *ui;
};

#endif // SAVEDLOCATIONS_H
