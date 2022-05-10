#include <iostream>

using namespace std;
class Car{
private:
    int yearModel;
    string make;
    int speed;
public:
    Car(int yearModel, string make){
        speed = 0;
        this->yearModel = yearModel;
        this->make = make;
    }
    int getYearModel(){
        return yearModel;
    }
    string getMake(){
        return make;
    }
    int getSpeed(){
        return speed;
    }
    void accelerate(){
        speed +=5;
    }
    void brake(){
        speed -=5;
    }

};
int main(){
    Car lexus(2022,"NewMakeForFuture");
    for(int i=0;i<5;i++){
        lexus.accelerate();
        cout << lexus.getSpeed() << endl;
    }
    for(int i=0;i<5;i++){
        lexus.brake();
        cout << lexus.getSpeed() << endl;
    }
    return 0;
}