#include "CruiseShip.h"
#include "CargoShip.h"

int main()
{
    CruiseShip ship1("Alantic", 2001, 3000);
    CargoShip ship2("Penas", 1992, 1000);
    ship1.print();
    ship2.print();
}