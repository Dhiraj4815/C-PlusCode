#include<iostream>
using namespace std;
int main(){
    float initialBalance=20000,RemainingBalance=0,withdrawal;
    
    cout<<"initialBalance:"<<initialBalance<<endl;
    while(true){
        cout<<"Enter Withdrawal amount:";
        cin>> withdrawal;

        if(initialBalance-withdrawal<5000){
            
             cout<<"Unsccessful Withdrawal: Balance can't go below 5000";
            break;
        }
        else {
            initialBalance-=withdrawal;
           cout<<"Successful Withdrawal : "<<initialBalance<<endl;
            
        }
    }
    return 0;
}