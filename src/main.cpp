#include <stdlib.h>
#include <iostream>
#include <vector>
#include <QCoreApplication>
#include <QMainWindow>
#include <QApplication>
#include <QLabel>
#include <QMenu>
#include <QBoxLayout>
#include <QPushButton>

#include "activities/activity.h"
#include "activities/outdoorActivity.h"
#include "activities/indoorActivity.h"

QLabel *label = nullptr;
std::vector<Activity> activityList = {};

void generateActivity(){
     /*Choose a random activity as a recoomendation for the user*/
    int chooseAct = rand() % 3;
    label->setText(activityList.at(chooseAct).getName());
}


int main(int argc, char **argv){

    /*Create some activities and store them in a vector*/
    Activity act = Activity("activity", FULLDAY);
    activityList.push_back(act);

    OutdoorActivity oAct = OutdoorActivity("outdoor", SHORT, WINTER);
    activityList.push_back(oAct);

    IndoorActivity iAct = IndoorActivity("indoor", MEDIUM, false);
    activityList.push_back(iAct);

    QApplication application(argc, argv);


    // Main Window
    QMainWindow mw;
    mw.setWindowTitle(QStringLiteral("Activity Recommender"));

    // Label for the recommended activity
    label = new QLabel();
    label->setFrameStyle(QFrame::Sunken);
    label->setText(activityList.at(0).getName());
    label->setAlignment(Qt::AlignHCenter);

    // Button to request new activities
    QPushButton *button = new QPushButton("Neue Aktivität");
    QObject::connect(button, &QPushButton::clicked,&mw, &generateActivity);

    // Add elements into layout
    QVBoxLayout *bl = new QVBoxLayout();
    bl->addWidget(label);
    bl->addWidget(button);

    // Set as central widget
    QWidget *window = new QWidget();
    window->setLayout(bl);
    mw.setCentralWidget(window);

    mw.show();

    return application.exec();
}
