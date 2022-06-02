#pragma once
#include<iostream>
#include<iomanip>
#include<unistd.h>
#include<string>
#include "FuelGauge.h"
#include "Simulation.h"
using namespace std;

//Yêu Trang lắm <3 <3
class Odometer {
    private:
        static int mile;
    public:
        Odometer();
        Odometer(int);
        int getMileLeft();
        int operator++();
        void consume(int);
};
int Odometer::mile = 0;

Odometer::Odometer() {

}
Odometer::Odometer(int m) {
    mile = m;
}
int Odometer::getMileLeft() {
    return mile;
}
int Odometer::operator++() {
    if(0 <= mile && mile < 999999) mile++;
    else mile = 0;
    return mile;
}
void Odometer::consume(int fuel) {
    while(fuel > 0) {
        system("cls");
        mile ++;
        int n = mile % 24;
        if(mile < 10) mile = stoi("0" + to_string(mile));
        drawCarMoving(n);
        if(mile % 24 == 0) fuel--;
        cout << "Quang duong di duoc: " << mile << " dam " 
                << right << setw(40) << "So xang con lai: " << fuel << " galleon" << endl;
        usleep(150000);
    }
}

