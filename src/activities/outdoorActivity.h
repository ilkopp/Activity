#ifndef OUTDOORACTIVITY_H
#define OUTDOORACTIVITY_H


#include "activity.h"

enum Season {SPRING, SUMMER, FALL, WINTER, ALL};

class OutdoorActivity: public Activity{
    private:
        Season season;
    public:
        /*Constructors*/
        OutdoorActivity();
        OutdoorActivity(string n, Duration d, Season s);

        /*Getter*/
        Season getSeason();

        /*Setter*/
        void setSeason(Season s);
};

#endif // OUTDOORACTIVITY_H