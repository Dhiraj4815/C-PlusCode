#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    string name;
    cout << "Enter your name " << endl;
    getline(cin, name);
    string todayDate;
    cout << "Enter the today date " << endl;
    getline(cin,todayDate);
    int goalPerday;
    cout << "learning coding per day in hr " << endl;
    cin >> goalPerday;
    string mood;
    cout << "happy/sad/motivated/etc." << endl;
    cin >> mood;

    cout << "My diary notes ...." << endl;
    cout << "name... : " << name << endl;
    cout << "today date... : " << todayDate << endl;
    cout << "goal per day ...: " << goalPerday << endl;
    cout << "mood ...:" << mood << endl;
    return 0;
}