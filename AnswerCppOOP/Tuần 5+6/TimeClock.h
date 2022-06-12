#pragma once
#include "MilTime.h"

class TimeClock : public MilTime
{
private:
    int distanceHours;
    int distanceMinutes;
    int distanceSeconds;

public:
    TimeClock(int hours, int minutes, int seconds) : MilTime(hours, minutes, seconds)
    {
    }
    void setDistance(int hours, int minutes, int seconds){
        this->distanceHours = hours;
        this->distanceMinutes = minutes;
        this->distanceSeconds = seconds;
    }
    TimeClock operator-(TimeClock);
    friend ostream &operator<<(ostream &os, const TimeClock &);
};
TimeClock TimeClock::operator-(TimeClock a)
{
    distanceHours = a.hour - this->hour;
    distanceMinutes = a.min - this->min;
    distanceSeconds = a.sec - this->sec;
    this->setDistance(distanceHours, distanceMinutes, distanceSeconds);
    return *this;
}
ostream &operator<<(ostream &os, const TimeClock &a)
{
    os << a.distanceHours << " : " << a.distanceMinutes << " : " << a.distanceSeconds << endl;
    return os;
}