#include <iostream>
#include "TimeOff.h"
using namespace std;

int main(){
    TimeOff nhanvien1("A41820","Thang");
    nhanvien1.setMaxSickDays(10);
    nhanvien1.setSickTaken(5);
    nhanvien1.setMaxVacation(4);
    nhanvien1.setVacTaken(1);
    nhanvien1.setMaxUnpaid(1);
    nhanvien1.setUnpaidTaken(0);
    nhanvien1.print();
    return 0;
}