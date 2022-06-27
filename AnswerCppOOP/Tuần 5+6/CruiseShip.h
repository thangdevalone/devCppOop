#pragma once
#include "Ship.h"
class CruiseShip : public Ship
{
private:
    int maxCustomer;

public:
    CruiseShip(string name, int year, int maxCustomer) : Ship(name, year)
    {
        this->maxCustomer = maxCustomer;
    }
    void setMaxCustomer(int maxCustomer) { this->maxCustomer = maxCustomer; }
    int getMaxCustomer() { return this->maxCustomer; }
    void print()
    {
        cout << "Name: " << this->getName() << endl;
        cout << "Hanh khach: " << this->maxCustomer << endl;
    }
};