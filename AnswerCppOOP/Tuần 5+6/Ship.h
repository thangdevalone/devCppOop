#pragma once 

#include <iostream>

using namespace std;

class Ship{
private:
    string name;
    int year;
public:
    Ship(string name,int year){
        this->name = name;
        this->year = year;
    }
    void setName(string name){
        this->name = name;
    }
    void setYear(int year){
        this->year = year;
    }
    string getName() { return this->name;}
    int getYear() { return this->year; }
    virtual void print(){
        cout << "Name: "<<this->name <<endl;
    }
};