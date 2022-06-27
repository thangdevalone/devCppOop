#pragma once
#include <iostream>

using namespace std;

class MangSo{
private:
    int size;   
    int* data;
public:
    MangSo(int size){
        this->size=size;
        int* data=new int[size];
        this->data=data;
    }

    int getLength(){
        return this->size;
    }
    void setData(int i,int data){
        *(this->data+i)=data;
    }
    int getData(int i){
        return *(this->data+i);
    }
    friend ostream& operator<<(ostream& os,const int& other){
        os <<other;
        return os;
    }
    int operator[](int i){
        return (this->getData(i));
    }
    MangSo operator=(const MangSo& other);

    MangSo push(int data);
    MangSo pushIn(int i ,int data);
    MangSo deleteIn(int i);
    ~MangSo(){
        delete[] data;
    }
};
