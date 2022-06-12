#pragma once

#include <iostream>
#include <string>

using namespace std;

class PersonData{
private:
    string surname;
    string name;
    string city;
    string province;
    string zip;
    string numberPhone;  
    string address;
public:
    PersonData(){
        this->surname = "Undefine";
        this->name ="Undefine";
        this->city = "Undefine";
        this->province = "Undefine";
        this->zip = "Undefine";
        this->numberPhone = "Undefine";
    }
    PersonData(string surname, string name, string city, string province, string zip, string numberPhone){
        this->surname = surname;
        this->name = name;
        this->city = city;
        this->province = province;
        this->zip = zip;
        this->numberPhone = numberPhone;
        this->address = address;
    }
    void setSurname(string surname) {
        this->surname = surname;
    }
    void setName(string name) {
        this->name = name;
    }
    void setCity(string city) {
        this->city = city;
    }
    void setProvince(string province) {
        this->province = province;
    }
    void setZip(string zip) {
        this->zip = zip;
    }
    void setNumberPhone(string numberPhone) {
        this->numberPhone = numberPhone;
    }
    string getSurname() {
        return this->surname;
    }
    string getName(){
        return this->name;
    }
    string getCity(){
        return this->city;
    }
    string getProvince(){
        return this->province;
    }
    string getZip(){
        return this->zip;
    }
    string getNumberPhone(){
        return this->numberPhone;
    }
}; 

