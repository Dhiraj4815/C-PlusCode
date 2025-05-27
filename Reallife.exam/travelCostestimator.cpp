#include <iostream>
using namespace std;
int main()
{

    float distance, mileage, fuelPrice, fuelNeeded, totalTravelcost;
    cout << "Distance traveled by vechile(km): ";
    cin >> distance;
    cout << "mileage of vechle(km/l)";
    cin >> mileage;
    cout << "cost of fuel(RS) ";
    cin >> fuelPrice;
    fuelNeeded = distance / mileage;

    cout << "Total fuelNeeded(L) " << fuelNeeded << endl;

    totalTravelcost = fuelPrice * fuelNeeded;
    cout << "Total traveling cost is(RS) " << totalTravelcost << endl;

    return 0;
}