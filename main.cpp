#include "activity.h"
#include <iostream>

int main(){
    Activity a = Activity();
    a.setName("test");
    std::cout << a.getName();
}