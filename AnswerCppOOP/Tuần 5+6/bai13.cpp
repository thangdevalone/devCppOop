
#include "Circle.h"
#include "Rectangle.h"

int main(){
    Circle circle(1,4,5.4);
    Rectangle rectangle(3,2.5);
    BasicShape *shapes[2];
    shapes[0] = &circle;
    shapes[1] = &rectangle;
    for(int i = 0; i < 2; i++){
        shapes[i]->calcArea();
        cout <<"Hinh "<<i+1<<": "<<shapes[i]->getArea()<<endl;
    }
}