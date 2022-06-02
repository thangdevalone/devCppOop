#pragma once
#include<iostream>
using namespace std;

class FuelGauge {
    private:
        static int fuel;
    public:
        FuelGauge();
        FuelGauge(int);
        void setFuelLeft(int);
        int getFuelLeft();
        int operator++();
        int operator--();
};  

int FuelGauge::fuel = 0;

FuelGauge::FuelGauge(int f) {
    setFuelLeft(f);
}
void FuelGauge::setFuelLeft(int f) {
    fuel = f;
}
int FuelGauge::getFuelLeft() {
    return fuel;
}
int FuelGauge::operator++() {
    if(0 <= fuel && fuel < 15) 
        fuel++;
    else fuel = 15;
    return fuel;
}
int FuelGauge::operator--() {
    if(0 < fuel && fuel <= 15) 
        fuel--;
    else fuel = 0;
    return fuel;
}

