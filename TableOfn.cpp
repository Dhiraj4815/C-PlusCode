#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter table no: " << endl;
    cin >> n;

    int i = 1;
    while (i <= 10)
    {
        cout << n << " * " << i << " = " << n * i << endl;
        i++;
    }
    return 0;
}