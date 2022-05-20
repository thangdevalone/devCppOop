#pragma once
#include "NumDays.h"
#include <iostream>

using namespace std;
class TimeOff{
private:
    string identifier;
    string name;
    int maxSickDays;
    int sickTaken;
    int maxVacation;
    int vacTaken;
    int maxUnpaid;
    int unpaidTaken;
public:
    TimeOff(string identifier,string name){
        this->identifier = identifier;
        this->name = name;
    }
    void setMaxSickDays(int maxSickDays){
        this->maxSickDays = maxSickDays;
    }
    int getMaxSickDays(){
        return maxSickDays;
    }
    void setSickTaken(int sickTaken){
        this->sickTaken = sickTaken;
    }
    int getSickTaken(){
        return sickTaken;
    }
    void setMaxVacation(int maxVacation){
        if (maxVacation>240){
            return;
        }
        this->maxVacation = maxVacation;
    }
    int getMaxVacation(){
        return maxVacation;
    }
    void setVacTaken(int vacTaken){
        this->vacTaken = vacTaken;
    }
    int getVacTaken(){
        return vacTaken;
    }
    void setMaxUnpaid(int maxUnpaid){
        this->maxUnpaid = maxUnpaid;
    }
    int getMaxUnpaid(){
        return maxUnpaid;
    }
    void setUnpaidTaken(int unpaidTaken){
        this->unpaidTaken = unpaidTaken;
    }
    int getUnpaidTaken(){
        return unpaidTaken;
    }
    void print(){
        cout<<"Ngay nghi om toi da: "<< getMaxSickDays()<<" ngay"<<endl;
        cout<<"Ngay nghi om da su dung: "<<getSickTaken()<<" ngay"<<endl;
        cout<<"Ngay nghi phep toi da: "<<getMaxVacation()<<" ngay"<<endl;
        cout<<"Ngay nghi phep da su dung: "<<getVacTaken()<<" ngay"<<endl;
        cout<<"Ngay nghi toi da ma khong duoc huong luong: "<<getMaxUnpaid()<<" ngay"<<endl;
        cout<<"Ngay nghi khong duoc tra luong ma da su dung: "<<getUnpaidTaken()<<" ngay"<<endl;
    }
};
