
#include "activity.h"

Activity::Activity(){
    this->name = "";
    this->duration = UNKNOWN;
}

Activity::Activity(string n, Duration d){
    this->name = n;
    this->duration = d;
}

string Activity::getName(){
    return this->name;
}

Duration Activity::getDuration(){
    return this->duration;
}

void Activity::setName(string n){
    this->name = n;
    return;
}

void Activity::setDuration(Duration d){
    this->duration = d;
    return;
}
