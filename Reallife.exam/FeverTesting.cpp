#include <iostream>
using namespace std;
int main()
{
    float bodyTemp;
    cout << "Enter Your body temperatur (F)";
    cin >> bodyTemp;
    if (bodyTemp > 100.4)
    {
        cout << "You may have a fever";
    }
    else
    {
        cout << "Temperature is normal";
    }

    return 0;
}