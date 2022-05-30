#include <iostream>

using namespace std;
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
        this->inches = inches;
        simplify();
    }
    FeetInches(const FeetInches& other){
        this->feet =other.feet;
        this->inches = other.inches;
    }
    FeetInches multiply(const FeetInches& other){
        this->feet *= other.feet;
        this->inches *= other.inches;
        this->simplify();
        return *this;
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
    // FeetInches operator+(const FeetInches& other);
    // FeetInches operator-(const FeetInches& other);
    // bool operator >= (const FeetInches& other);
    // bool operator <= (const FeetInches& other);
    // bool operator !=(const FeetInches& other);

    void print(){
        cout << "FEET: "<<this->feet<<" inches: "<<this->inches<<endl;
    }
};
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
int main(){
    FeetInches Cat1(6,3);
    FeetInches Cat2=Cat1;
    FeetInches Cat3=Cat2.multiply(Cat1);
     Cat3.print();
    return 0;
}