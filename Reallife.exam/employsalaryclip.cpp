#include <iostream>
using namespace std;
int main()
{
    // Create a program to store employee name, ID,
    // hours worked, and hourly rate. Output salary.
    string name = "XYZ";
    int ID = 5544;
    int hrswork = 60; // ina a week
    int hrrate = 400;
    int salary = hrswork * hrrate;

    cout << "Name of employee is : " << name << endl;
    cout << "Employee Id : " << ID << endl;
    cout << "No.of hrs worked in a week: " << hrswork << endl;
    cout << "hourly rate is: " << hrrate << endl;
    cout << "Total salary is: " << salary << endl;

    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     string name;
//     int ID, hrswork, hrrate;

//     cout << "Enter employee name: ";
//     cin >> name;
//     cout << "Enter employee ID: ";
//     cin >> ID;
//     cout << "Enter hours worked: ";
//     cin >> hrswork;
//     cout << "Enter hourly rate: ";
//     cin >> hrrate;

//     int salary = hrswork * hrrate;

//     cout << "Name of employee: " << name << endl;
//     cout << "Employee ID: " << ID << endl;
//     cout << "Hours worked: " << hrswork << endl;
//     cout << "Hourly rate: " << hrrate << endl;
//     cout << "Total salary: " << salary << endl;

//     return 0;
// }
