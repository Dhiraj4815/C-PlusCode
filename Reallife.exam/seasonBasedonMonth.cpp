#include<iostream>
using namespace std;
int main(){
        int month;
    cout<<"Enter montsh 1-12";
    cin>>month;

    switch (month){
        case 1:
        cout<<"January:Winter";
        break;
        case 2:
        cout<<"February:Winter";
        break;
        case 3:
        cout<<"March Spring";
        break;
        case 4:
        cout<<"April : Spring";
        break;
        case 5:
        cout<<"May : Spring";
        break;
        case 6:
        cout<<"June : Summer";
        break;
        case 7:
        cout<<"July : Summer";
        break;
        case 8:
        cout<<"August : Summer";
        break;
        case 9:
        cout<<"September : Autumn";
        break;
        case 10:
        cout<<"October : Autumn";
        break;
        case 11:
        cout<<"November : Autumn";
        break;
        case 12:
        cout<<"December : Winter";
        break;
        default:
        cout<<"Invalid month num";
        break;
    }

    

    return 0;
}