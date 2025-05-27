#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the first no.";
    cin >> a;
    cout << "Enter the operator(+,-,*,/,%)";
    char ch; //+ - / * %
    cin >> ch;
    cout << "Enter the second no.";
    int b;
    cin >> b;

    switch (ch)
    {
    case '+':
        cout << "sum : " << a + b << endl;
        break;
    case '-':
        cout << "difference : " << a - b << endl;
        break;
    case '*':
        cout << "multiplication : " << a * b << endl;
        break;
    case '/':
        cout << "Divison : " << a / b << endl;
        break;
    case '%':
        cout << "Remainder : " << a % b << endl;
        break;
    default:
        cout << "Invalid operator" << endl;
    }

    return 0;
}
