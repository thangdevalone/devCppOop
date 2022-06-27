#pragma once

#include "Ship.h"

class CargoShip : public Ship {
private:
    int maxHangHoa;

public:
    CargoShip(string name, int year, int maxHangHoa) : Ship(name, year)
    {
        this->maxHangHoa = maxHangHoa;
    }
    void setMaxHangHoa(int maxHangHoa) { this->maxHangHoa = maxHangHoa; }
    int getMaxHangHoa() { return this->maxHangHoa; }
    void print()
    {
        cout << "Name: " << this->getName() << endl;
        cout << "Khoi Luong: " << this->maxHangHoa << endl;
    }
};