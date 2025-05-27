#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    //    cout<<++a<<endl; //1+4=5
    //     cout<<a--<<endl; //a=5,a--=5

    cout << --a << endl; // a=4-1=3
    cout << a-- << endl; // a=3
    cout << a++ << endl; // a=3-1=2 then a=2
 
    return 0;
}