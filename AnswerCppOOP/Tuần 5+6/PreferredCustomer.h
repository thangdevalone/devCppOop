#pragma once
#include "CustomerData.h"
#include <iostream>

using namespace std;

class PreferredCustomer: public CustomerData{
private:
    int diemtichluy;
    int chietkhau;
public:
    PreferredCustomer(int diemtichluy,string id,bool check,string surname, string name, string city, string province, string zip, string numberPhone):CustomerData(id,check,surname,name,city,province,zip,numberPhone){
        this->diemtichluy = diemtichluy;
    }   
    void tinhChietKhau(){
        if(this->diemtichluy>= 500) this->chietkhau=5;
        if(this->diemtichluy>= 1000) this->chietkhau=6;
        if(this->diemtichluy>= 1500) this->chietkhau=7;
        if(this->diemtichluy>= 2000) this->chietkhau=10;
    }
    void print(){
        CustomerData::print();
        this->tinhChietKhau();
        cout << "Chiet Khau: "<< this->chietkhau << "%"<<endl;
    }

};
