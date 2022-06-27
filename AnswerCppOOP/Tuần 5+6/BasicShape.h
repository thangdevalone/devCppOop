#pragma once

#include <iostream>

using namespace std;

class BasicShape
{
private:
    float area;

public:
    BasicShape(float area=0)
    {
        this->area = area;
    }
    float getArea()
    {
        return this->area;
    }
    void setArea(float area){ this->area = area;}
    virtual void calcArea() = 0;
};