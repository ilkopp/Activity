#ifndef ACTIVITY_H
#define ACTIVITY_H

#include <QString>

using namespace std;

enum Duration {SHORT, MEDIUM, FULLDAY, WEEKEND, UNKNOWN};

class Activity{
    private:
        QString name;
        Duration duration;
    public:
        /*Constructors*/
        Activity();
        Activity(QString n, Duration d);
        
        /*Getter*/
        QString getName();
        Duration getDuration();

        /*Setter*/
        void setName(QString n);
        void setDuration(Duration d);
};

#endif // ACTIVITY_H