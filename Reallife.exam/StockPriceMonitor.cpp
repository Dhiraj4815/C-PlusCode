
#include<iostream>
using namespace std;

int main(){
    float stockPrice, highest, lowest;
    int day = 1;

    while(day <= 5){
        cout << "Stock Price Day: " << day << " ";
        cin >> stockPrice;

        // For the first day, initialize highest and lowest
        if(day == 1){
            highest = lowest = stockPrice;
        }

        if(stockPrice > highest)
            highest = stockPrice;
        if(stockPrice < lowest)
            lowest = stockPrice;
        day++;
    }
    cout << "Highest Stock Price: " << highest << endl;
    cout << "Lowest Stock Price: " << lowest << endl;

    return 0;
}
