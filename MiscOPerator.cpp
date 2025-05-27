#include <iostream>
using namespace std;
int main()
{

    int a = 4;
    cout << sizeof(a) << endl; // 4byte

    char name = 'a';
    cout << sizeof(name) << endl; // 1 byte

    bool flag;
    a == name ? flag = true : flag = false;
    cout << flag << endl; // false=0

    cout << (&a) << endl; // address of a 0x61ff08

    return 0;
}