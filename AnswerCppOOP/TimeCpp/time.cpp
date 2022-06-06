#include <iostream>
#include "time.h"
#include <ctime>
using namespace std;

int main(){
    time_t now=time(0);
    tm *ltm=localtime(&now);
    Time time(ltm->tm_hour,ltm->tm_min,ltm->tm_sec+1);
    time.startPlus();
    return 0;
}
