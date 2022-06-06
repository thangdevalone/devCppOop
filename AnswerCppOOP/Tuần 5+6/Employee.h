#pragma once
#include <iostream>

using namespace std;

class Employee
{
public:
    string name;
    string id;
    int dayStartHire;
    Employee(string name = "Unnamed", string id = "None", int dayStartHire = 0)
    {
        setName(name);
        setId(id);
        setDayStartHire(dayStartHire);
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return this->name;
    }
    void setId(string id)
    {
        this->id = id;
    }
    string getId()
    {
        return this->id;
    }
    void setDayStartHire(int dayStartHire)
    {
        this->dayStartHire = dayStartHire;
    }
    int getDayStartHire()
    {
        return this->dayStartHire;
    }
};