#include<iostream>
using namespace std;
int main(){

    string Password;
    while(true){
        cout<<"Enter a Password: ";
        cin>>Password;
        if(Password=="Marco123"){
            cout<<"Correct Password"<<endl;
            break;
        }
        else cout<<"Wrong password"<<endl;
       
    }
    return 0;
}