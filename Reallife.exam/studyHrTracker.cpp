#include <iostream>
using namespace std;
int main()
{
    int hrs, totalHrs = 0, days = 0;
    while (true)
    {
        cout << "How many hrs are you studied in each day : ";
        cin >> hrs;
        if (hrs < 0)
        {
            break;
        }
        if (hrs > 0)
        {
            totalHrs += hrs;
            days++;
        }
    }
    cout << "Total hours of study: " << totalHrs << endl;
    float avg = totalHrs / days;
    cout << "avg study hr in each day: " << avg << endl;

    return 0;
}