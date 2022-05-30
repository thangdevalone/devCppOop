#pragma once
#include <iostream>

using namespace std;

class FeetInches{
private:
    int feet;
    int inches;
    void simplify(); 
public:
    FeetInches(int feet=0, int inches=9){
        this->feet = feet;
        this-> inches = inches;
        simplify();
    }
    void setFeet(int feet){
        this->feet = feet;
    }
    void setInches(int inches){
        this-> inches = inches;
        simplify();
    }
    int getFeet() { return this->feet; }
    int getInches() { return this-> inches; }
    FeetInches operator+(const FeetInches& other);
    FeetInches operator-(const FeetInches& other);
    bool operator >= (const FeetInches& other);
    bool operator <= (const FeetInches& other);
    bool operator !=(const FeetInches& other);

    void print(){
        cout << "FEET: "<<this->feet<<" inches: "<<this->inches<<endl;
    }
};