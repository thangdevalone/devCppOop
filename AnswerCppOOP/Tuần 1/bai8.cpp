#include <iostream>

using namespace std;
class Circle {
private:    
    float radius;
    const float pi=3.14159;
public:
    Circle(){
        radius=0;
    }
    Circle(float radius){
        this->radius=radius;
    }
    void setRadius(float radius){
        this->radius=radius;
    }
    float getradius(){
        return radius;
    }
    float getArea(){
        return radius*radius*pi;
    }
    float getDiameter(){
        return radius*2;
    }
    float getCircumference(){
        return radius*pi*2;
    }
    void displayData(){
        cout << "Dien Tich: "<<getArea()<<endl;
        cout <<"Duong kinh: "<<getDiameter()<<endl;
        cout <<"Chu vi: "<<getCircumference()<<endl;
    }
};
int main(){
    float radius;
    cout <<"Nhap ban kinh: ";
    cin>>radius;
    Circle circle(radius);
    circle.displayData();
    return 0;
}