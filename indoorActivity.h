#include "activity.h"

class IndoorActivity: public Activity{
    private:
        bool atHome;
    public:
        /*Constructors*/
        IndoorActivity();
        IndoorActivity(string n, Duration d, bool h);

        /*Getter*/
        bool getAtHome();

        /*Setter*/
        void setAtHome(bool h);
};