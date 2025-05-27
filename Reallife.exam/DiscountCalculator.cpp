#include <iostream>
using namespace std;
int main()
{
    int TotalShopping;
    cout << "Enter the amount of Total shopping (RS)";
    cin >> TotalShopping;
    float discount = 0;
    if (TotalShopping >= 10000)
    {
        discount = .20; // 20/100=0.20
        cout << "You got 20% discount";
    }
    else if (TotalShopping > 5000)
    {
        discount = .10;
        cout << "You got 10% discount";
    }
    else
    {

        cout << "You don't get any discount";
    }
    float finalPrice = TotalShopping - (TotalShopping * discount);
    cout << "Final price (Rs)" << finalPrice << endl;

    return 0;
}