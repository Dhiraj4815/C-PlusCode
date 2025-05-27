#include <iostream>
using namespace std;
int main()
{
    int num1 = 10;
    int num2 = 8;

    num1 += 5;
    cout << num1 << endl; // 15
    num2 -= 5;
    cout << num2 << endl; // 3
    num1 *= 3;   
    cout << num1 << endl; // 15*3=45

    num1 %= 4;
    cout << num1 << endl; // 45/4=1 remainder

    return 0;
}