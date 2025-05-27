#include <iostream>
using namespace std;
int main()
{

    int balance = 50000, withdrawAmount;
    cout <<"Enter amount to withdraw";
    cin >> withdrawAmount;
    if (balance < withdrawAmount)
    {
        cout << "Insufficient funds" << endl;
    }
    else
    {
        cout << "Remaining Balance: Rs "<< balance - withdrawAmount << endl;
    }

    return 0;
}