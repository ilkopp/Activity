
#include "activity.h"

Activity::Activity(){
    this->name = "";
    this->duration = UNKNOWN;
}

Activity::Activity(QString n, Duration d){
    this->name = n;
    this->duration = d;
}

QString Activity::getName(){
    return this->name;
}

Duration Activity::getDuration(){
    return this->duration;
}

void Activity::setName(QString n){
    this->name = n;
    return;
}

void Activity::setDuration(Duration d){
    this->duration = d;
    return;
}
