#pragma once
#include "Time.h"
#include <iostream>
using namespace std;
class MilTime : public Time{
public:
    MilTime(int hour=0, int minute=0, int second=0): Time( hour, minute,  second){

    }
    void displayDate(){
        if(hour >= 0 && hour <=12){
            cout << "["<<Time::getHour()<<":"<<Time::getMin()<<":"<<Time::getSec()<<" AM"<<"]";
        }
        if (hour >= 13 && hour <=23){
            cout << "["<<Time::getHour()-12<<":"<<Time::getMin()<<":"<<Time::getSec()<<" PM"<<"]";
        }
    }
    
};