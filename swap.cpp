#include<iostream>
using namespace std;
//swap two number
int main(){
    int a,b;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    return 0;

}