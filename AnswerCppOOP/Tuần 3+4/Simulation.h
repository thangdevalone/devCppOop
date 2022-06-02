#ifndef SIMULATION_H
#define SIMULATION_H
#include <iostream>
#include <iomanip>
using namespace std;

void drawCarMoving(int n)
{
    cout << right << setw(5 * n) << "    ____     " << endl;
    cout << right << setw(5 * n) << " __/D  D\\___." << endl;
    cout << right << setw(5 * n) << "|_/O\\___/O\\_|" << endl
         << endl;
}
#endif
