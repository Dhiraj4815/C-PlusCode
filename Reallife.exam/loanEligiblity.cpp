#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "What's your age";
    cin >> age;
    int income;
    cout << "What's your income";
    cin >> income;
    if (age >= 21 && income >= 25000)
    {
        cout << "You are Eligible for loan: " << endl;
    }
    else
    {
        cout << "You are not Eligible for loan: " << endl;
    }
    return 0;
}