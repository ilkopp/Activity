#include "outdoorActivity.h"
#include <QString>
OutdoorActivity::OutdoorActivity() : Activity(){
    this->season = ALL;
}
OutdoorActivity::OutdoorActivity(QString n, Duration d, Season s) : Activity(n, d){
    this->season = s;
}

Season OutdoorActivity::getSeason(){
    return this->season;
}

void OutdoorActivity::setSeason(Season s){
    this->season = s;
    return;
}