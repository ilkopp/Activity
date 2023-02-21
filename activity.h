#include <string>

using namespace std;

enum Duration {SHORT, MEDIUM, FULLDAY, WEEKEND, UNKNOWN};

class Activity{
    private:
        string name;
        Duration duration;
    public:
        Activity();
        Activity(string n, Duration d);
        
        /*Getter*/
        string getName();
        Duration getDuration();

        /*Setter*/
        void setName(string n);
        void setDuration(Duration d);
};