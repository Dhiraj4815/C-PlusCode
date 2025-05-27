#include <iostream>
#include <iomanip> // for setw and setprecision
using namespace std;

int main() {
    string item1, item2, item3;
    float price1, price2, price3;

    // Input item 1
    cout << "Enter name of item 1: ";
    getline(cin, item1);
    cout << "Enter price of " << item1 << ": Rs. ";
    cin >> price1;
   cin.ignore(); // to clear newline character from buffer

    // Input item 2
    cout << "Enter name of item 2: ";
    getline(cin, item2);
    cout << "Enter price of " << item2 << ": Rs. ";
    cin >> price2;
    cin.ignore();

    // Input item 3
    cout << "Enter name of item 3: ";
    getline(cin, item3);
    cout << "Enter price of " << item3 << ": Rs. ";
    cin >> price3;

    float total = price1 + price2 + price3;

    // Display the bill
    cout << "\n----- Food Bill -----" << endl;
    cout << fixed << setprecision(2);
    cout << left << setw(15) << "Item" << "Price (Rs.)" << endl;
    cout << "---------------------------" << endl;
    cout << left << setw(15) << item1 << price1 << endl;
    cout << left << setw(15) << item2 << price2 << endl;
    cout << left << setw(15) << item3 << price3 << endl;
    cout << "---------------------------" << endl;
    cout << left << setw(15) << "Total" << total << endl;

    return 0;
}
