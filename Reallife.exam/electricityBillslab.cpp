#include <iostream>
using namespace std;
int main()
{
    //     First 100 units: ₹2/unit

    // Next 100 units: ₹5/unit

    // Above 200 units: ₹10/unit
    // Calculate and print total bill.
    int units;
    float bill=0;
    cout << "electricity consumed per month (uints)";
    cin >> units;

    if (units <= 100)
    {
        bill=(units * 2);
    }
    else if (units <= 200)
    {
       bill=(100* 2)+((units-100)*5);
    }
    else
    {
        bill=(100 * 2)+(100*5)+((units-200)*10);
    }
    cout<<"Total bill is RS "<<bill<<endl;

    return 0;
}