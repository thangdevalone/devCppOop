#include <iostream>
#include <math.h>
#include "FeetInches.h"

using namespace std;
void FeetInches::simplify(){
    if (inches >=12){
        feet=feet+inches/12;
        inches=inches%12;
    }
    if (inches <0){
        feet=feet-(abs(inches)/12-1);
        inches=12-(abs(inches)%12);
    }
}
FeetInches FeetInches::operator + (const FeetInches& other){
    this->inches+=other.inches;
    this->feet+=other.feet;
    this->simplify();
    return *this;
}
bool FeetInches::operator >= (const FeetInches& other){
    if (this->feet < other.feet) return false;
    else if(this->inches < other.inches) return false;
    return true;
}
bool FeetInches::operator != (const FeetInches& other){
    if (this->feet == other.feet) return false;
    else if(this->inches == other.inches) return false;
    return true;
}
bool FeetInches::operator <= (const FeetInches& other){
    if (this->feet > other.feet) return false;
    else if(this->inches > other.inches) return false;
    return true;
}
int main(){
    FeetInches Cat(6,12);
    FeetInches Dog(5,12);
    cout << bool(Cat <= Dog)<<endl;
    (Cat+Dog).print();
    return 0;
}