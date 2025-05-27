#include <iostream>
using namespace std;
int main()
{

    float currentBalance;
    cout << "Current Balance : ";
    cin >> currentBalance;
    float costOfaCall;
    cout << "cost of a call : ";
    cin >> costOfaCall;
    int numofCall;
    cout << "NO.of calls made : ";
    cin >> numofCall;
    float RemainingBalance = currentBalance - (costOfaCall * numofCall);
    cout << "Remaninng balance: RS " << RemainingBalance << endl;

    return 0;
}