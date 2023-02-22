#include "outdoorActivity.h"

OutdoorActivity::OutdoorActivity() : Activity(){
    this->season = ALL;
}
OutdoorActivity::OutdoorActivity(string n, Duration d, Season s) : Activity(n, d){
    this->season = s;
}

Season OutdoorActivity::getSeason(){
    return this->season;
}

void OutdoorActivity::setSeason(Season s){
    this->season = s;
    return;
}