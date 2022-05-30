#pragma once
#include <iostream>

using namespace std;

class Month{
private:
    string name;
    string monthName[12]={"January", "February", "March", "April", "May", "June","July", "August", "September", "October", "November", "December"};
    
    int monthNumber;
public:
    Month(){
        this->monthNumber=1;
        this->name="January";
    }
    Month(string name){
        this->name=name;
        this->monthNumber=convertStringToNumber(name);
    }
    Month(int monthNumber){
        this->monthNumber=monthNumber-1;
        this->name=monthName[this->monthNumber];
    }
    int convertStringToNumber(string name){
        for(int i=0; i<=11;i++){
            if (name == monthName[i]){
                return i;
            }
        }
        return -1;
    }
    void setName(string name){
        this->name=name;
    }
    string getName(){
        return name;
    }
    int getMonthNumber(){
        return monthNumber;
    }
    void operator++(int){
        if (monthNumber==11){
            this->monthNumber=0;
            this->name=monthName[monthNumber];
        } else {
            this->monthNumber= monthNumber+1;
            this->name=monthName[monthNumber];
        }
    }
    void operator++(){
        if (monthNumber==11){
            this->monthNumber=0;
            this->name=monthName[monthNumber];
        } else {
            this->monthNumber=monthNumber+1;
            this->name=monthName[monthNumber];
        }
    }
    void operator--(int){
        if (monthNumber==0){
            this->monthNumber=11;
            this->name=monthName[monthNumber];
        } else {
            this->monthNumber=monthNumber-1;
            this->name=monthName[monthNumber];
        }
    }
    void operator--(){
        if (monthNumber==0){
            this->monthNumber=11;
            this->name=monthName[monthNumber];
        } else {
            this->monthNumber=monthNumber-1;
            this->name=monthName[monthNumber];
        }
    }
    friend ostream& operator<<(ostream& os,const Month& a){
         os << "Thang "<< a.monthNumber<< " : "<<a.monthName[a.monthNumber-1]<< endl;
         return os;
    }
    friend istream& operator >>(istream& is,Month& a){
        is >> a.monthNumber;
        return is;
    }
    void print(){
        cout << "Thang "<< getMonthNumber() +1<< " : "<<getName();
    }
};
