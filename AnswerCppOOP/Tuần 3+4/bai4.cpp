#include <iostream>
#include "NumDays.h"
using namespace std;

int main(){
    NumDays numday1(8);
    NumDays numday2(12);
    NumDays numday3=numday1+numday2;
    NumDays numday4=numday2-numday1;
    NumDays numday5=--numday1;
    NumDays numday6=numday2++;
    numday3.displayData();
    numday4.displayData();
    numday5.displayData();
    numday6.displayData();

    return 0;
}