#pragma once

#include "PersonData.h"
#include <iostream>
#include <string>
using namespace std;
class CustomerData : public PersonData{
private:
    string id;
    bool check;
public:
    CustomerData(string id,bool check,string surname, string name, string city, string province, string zip, string numberPhone) : PersonData(surname,name,city,province,zip,numberPhone){
        this->id = id;
        this->check = check;
    }
    virtual void print() {
        cout << "id: " << this->id << endl;
        cout << "check: " << this->check << endl;
        cout << "surname:" << this->getSurname() << endl;
        cout << "name: " << this->getName() << endl;
        cout << "city: " << this->getCity() << endl;
        cout << "province: " << this->getProvince() << endl;
        cout << "zip: " << this->getZip() << endl;
        cout << "numberPhone: " << this->getNumberPhone() << endl;
    }
};