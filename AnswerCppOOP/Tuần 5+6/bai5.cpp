#include "TimeClock.h"

int main(){
    TimeClock clock1(9,0,0);
    TimeClock clock2(13,20,0);
    cout << clock1-clock2 << endl;
}