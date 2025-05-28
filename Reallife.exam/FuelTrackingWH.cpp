// #include<iostream>
// using namespace std;
// int main(){
//     int noOftrip;
//     cin>>noOftrip;
    
    
//     while(noOftrip>0){
//        int fuelConsumed;
//        cin>>fuelConsumed;
       
//        cout<<"Enter the fuel used for trip"<<noOftrip<<" : "<<fuelConsumed<<" lit"<<endl;
//       noOftrip--;
//     }

//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    float fuelConsumed, totalFuel = 0;
    int tripCount = 0;

    cout << "Enter the fuel used for each trip (enter a negative number to stop):" << endl;

    // Keep looping while fuelConsumed is non-negative
    while (true) {
        cout << "Enter fuel used for trip: ";
        cin >> fuelConsumed;

        // Check for the negative number to stop
        if (fuelConsumed < 0) {
            break;
        }

        // Add fuel to total
        totalFuel += fuelConsumed;
        tripCount++;
    }

    if (tripCount > 0) {
        float averageFuel = totalFuel / tripCount;
        cout << "Total fuel used: " << totalFuel << " liters" << endl;
        cout << "Average fuel per trip: " << averageFuel << " liters" << endl;
    } else {
        cout << "No trips entered!" << endl;
    }

    return 0;
}
