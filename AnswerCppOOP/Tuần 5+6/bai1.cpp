#include <iostream>
#include "ProductionWorker.h"

int main()
{
    ProductionWorker nhanvien1(1,5);
    nhanvien1.setName("Thang");
    nhanvien1.setDayStartHire(2);
    cout << nhanvien1.getName() << endl;
}