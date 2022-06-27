#pragma once
#include "BasicShape.h"

class Rectangle: public BasicShape{
private:
    float width,height;
public:
    Rectangle(float width,float height){
        this->width = width;
        this->height = height;
    }
    void calcArea(){
        BasicShape::setArea((this->width)*(this->height));
    }
};