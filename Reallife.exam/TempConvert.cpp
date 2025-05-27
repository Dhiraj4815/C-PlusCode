#include <iostream>
using namespace std;
int main()
{
    // F = (C × 9/5) + 32
    float cel;
    cout << "Enter temp in celcius";
    cin >> cel;
    float Faren = (cel * 9 / 5) + 32;
    cout << "Temp in Farenheit : " << Faren << endl;

    return 0;
}