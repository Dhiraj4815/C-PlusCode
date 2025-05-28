#include<iostream>
using namespace std;
int main(){
     float Donation,totalDonation=0;
     //Write a program that keeps collecting donations 
     //until the total donations reach or exceed ₹10,000. 
     //After each donation, show the total collected so far.

     while(true){
        cout<<"Donante for child welfare:";
        cin>>Donation;
         totalDonation+=Donation;
        cout<<"Total Donation is Rs:"<<totalDonation<<endl;
        if(totalDonation>=10000){
            break;
        }
         
     }
      cout << "Thank you! We have reached our goal of Rs. 10,000 or more." << endl;

    return 0;
}