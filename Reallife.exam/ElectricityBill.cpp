#include <iostream>
using namespace std;
int main()
{
    int units;
    cout << "units consumed";
    cin >> units;
    int costPerUnit;
    cout << "Cost per unit";
    cin >> costPerUnit;
    int totalBill = units * costPerUnit;
    cout << "Total Electricity bill is : Rs " << totalBill << endl;

    return 0;
}