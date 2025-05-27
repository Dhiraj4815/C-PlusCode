#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;

    //nested if else statement
    if(n1>n2){
        if(n1>n3){
            cout<<"Max is n1 : "<<n1<<endl;
        }
        else
        {
            cout<<"Max is n3 :"<<n3<<endl;
        }
    }
    else {
        if(n2>n3) {
        cout<<"Max is n2 : "<<n2<<endl;
        }
        else
        {
            cout<<"Max is n3 :"<<n3<<endl;
        }
    }
    return 0;
}