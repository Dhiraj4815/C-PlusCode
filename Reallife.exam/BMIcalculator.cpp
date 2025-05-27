#include <iostream>
using namespace std;
int main()
{
    // BMI = weight / (height × height)
    float weight;
    cout << "What's Your weight is :kg";
    cin >> weight;
    float height;
    cout << "What's Your height is :m";
    cin >> height;
    float BMI = weight / (height * height);
    cout << "Your BMI is :" << BMI << "kg/m^2" << endl;

    if (BMI < 18.5)
        cout << "You are underweight" << endl;
    else if (BMI < 25)
        cout << "You are normal weight" << endl;
    else
        cout << "You are overweighted" << endl;

    return 0;
}