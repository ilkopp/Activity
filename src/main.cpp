#include "activities/activity.h"
#include "activities/outdoorActivity.h"
#include "activities/indoorActivity.h"

#include <stdlib.h>
#include <iostream>
#include <vector>

int main(){

    /*Create some activities and store them in a vector*/
    Activity act = Activity("activity", FULLDAY);

    std::vector<Activity> activityList = {act};

    OutdoorActivity oAct = OutdoorActivity("outdoor", SHORT, WINTER);
    activityList.push_back(oAct);

    IndoorActivity iAct = IndoorActivity("indoor", MEDIUM, false);
    activityList.push_back(iAct);

    /*Choose a random activity as a recoomendation for the user*/
    int chooseAct = rand() % 3;
    cout << activityList.at(chooseAct).getName();
}