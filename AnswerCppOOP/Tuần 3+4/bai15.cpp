#include <iostream>
#include "Odometer.h"
using namespace std;

int main()
{
    int f = 0;
    int m = 0;
    FuelGauge fg(f);
    Odometer mile;
    for (int i = 0; i < 15; i++)
    {
        cout << "|";
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << "|";
        }
        if (i < 10)
            i = stoi("0" + to_string(i));
        cout << "\nDang do xang... So xang hien tai la: " << f + 1 << " galleon" << endl;
        usleep(400000);
        f++;
        system("cls");
    }
    mile.consume(f);
    return 0;
}