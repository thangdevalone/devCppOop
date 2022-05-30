#pragma once
#include <iostream>

using namespace std;
class NumDays{
private:
    int timeWork;
public:
    NumDays(int time){
        this->timeWork = time;
    }
    NumDays(){

    }
    void setTime(int time){
        this->timeWork = time;
    }
    int getTime(){
        return timeWork;
    }
    float getWork(){
        return float(timeWork)/8;
    }
    NumDays operator+(NumDays c){
        NumDays result;
        result.timeWork = c.timeWork+timeWork;
        return result;
    }
    NumDays operator-(NumDays c){
        NumDays result;
            result.timeWork =timeWork-c.timeWork;
        return result;
    }
    NumDays operator --(){
        
        return timeWork-1;
    }
    NumDays operator ++(){
        
        return timeWork+1;
    }
    NumDays operator --(int){
        
        return timeWork-1;
    }
    NumDays operator ++(int){
        
        return timeWork+1;
    }
    void displayData(){
        cout << getWork()<< " Ngay Cong" << endl;
    }
};
