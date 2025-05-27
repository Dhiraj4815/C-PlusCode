#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    cout << "before Swapping number: " << num1 << num2 << endl;

    // swap two number
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "Swapping number is:" << num1 << num2 << endl;
    return 0;
}