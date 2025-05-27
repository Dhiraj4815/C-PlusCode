#include <iostream>
using namespace std;
int main()
{

    int marks;
    cout << "Enter Your marks";
    cin >> marks;
    if (marks >= 90 && marks <=100)
    {
        cout << " Grade A" << endl;
    }
    else if (marks >= 75 && marks < 90)
    {
        cout << " Grade B" << endl;
    }
    else if (marks >= 60 && marks < 75)
    {
        cout << "Grade C" << endl;
    }
    else if (marks >= 40 && marks < 60)
    {
        cout << " Grade D" << endl;
    }
    else
    {
        cout << "Grade E" << endl;
    }

    return 0;
}