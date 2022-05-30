#include <iostream>

using namespace std;
class FuelGause{
private:
    static int Fuel;
public:
    FuelGause(){};
    FuelGause(int value){
        setFuel(value);
    };
    void setFuel(int value){
        if (value >15){
            cout << "Binh day";
            this->Fuel=15;
        }
        this->Fuel = value;
    }
    int getFuel() { return this->Fuel; };
    int operator++(int){
        this->Fuel++;
        setFuel(this->Fuel);    
    }
    int operator--(int){
        if (this->Fuel>0){
            this->Fuel--;
        } else {
            cout << "Het Xang!";
        }
    }
    FuelGause doXang(int value){
        for (int i=0; i<value; i++){
            this->Fuel=value;
        }
        setFuel(this->Fuel);
        return *this;
    }
};
class Odometer{
private:
    static long meter;
    int cal;
public:
    Odometer(){
        this->cal=0;
    };
    void setMeter(int meter){
        this->cal++;
        if (meter==999999){
            this->meter=0;
            this->cal=this->cal;
        }
        if ((this->cal)%24==0){
            this->meter=meter;
            
        }

    }
    int getMeter(){
        return this->meter;
    }
    long operator++(int){
        this->meter++;
        setMeter(this->meter);

    }
};
int main(){

    return 0;
}