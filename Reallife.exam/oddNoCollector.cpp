#include <iostream>
using namespace std;
// Keep asking the user to enter numbers. If a number is odd, add it to a total sum.
// Stop the loop when the user enters -1. Display the final sum of all odd numbers.
int main()
{
    int num, totalSum = 0;

    while (true)
    {
        cout << "Enter no..";
        cin >> num;
        if (num == -1)//always use 1st stop condition.
        {
            break;
        }
        if (num % 2 != 0)
        {
            totalSum += num;
        }
        
    }
    cout << totalSum << endl;
    return 0;
}