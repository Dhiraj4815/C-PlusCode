#include <iostream>
using namespace std;
int main()
{
    int marks;
    cin >> marks;

    if (marks > 33)
    {
        cout << "Pass" << endl;
    }
    else
        cout << "fail" << endl;

    // ternary operator

    marks > 33 ? cout << "Pass" << endl : cout << "fail" << endl;

    return 0;
}