#include "indoorActivity.h"

IndoorActivity::IndoorActivity() : Activity(){
    this->atHome = false;
}
IndoorActivity::IndoorActivity(string n, Duration d, bool h) : Activity(n, d){
    this->atHome = h;
}

bool IndoorActivity::getAtHome(){
    return this->atHome;
}

void IndoorActivity::setAtHome(bool h){
    this->atHome = h;
    return;
}