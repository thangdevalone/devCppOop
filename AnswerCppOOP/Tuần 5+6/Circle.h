#pragma once
#include "BasicShape.h"

class Circle : public BasicShape
{
private:
    int centerX;
    int centerY;
    float radius;

public:
    Circle(int centerX, int centerY,float radius){
        this->centerX = centerX;
        this->centerY = centerY;
        this->radius = radius;
    }
    void calcArea(){
        BasicShape::setArea((this->radius)*(this->radius)*3.14);
    }
};