#include<iostream>
using namespace std;
 int main(){
//     for(int i=1;i<5 ;i++){
           //cout<<i<<endl;//12345
//         cout<<"Hello World"<<endl;//hello world 5 times
//     }

//////////////////////////////////////////////////////////


// int i=1;
// while(i<=5){
//     cout<<i<<endl;//12345
//     i++;
// }



//////////////////////////////////////////////////


// while(true){
//     int n;
//     cin>>n;
//     if(n==-1){
//         cout<<"Matched!"<<endl;
//         break;//it helps to remove out from the loop
//     }
//     else cout<<"Doen't Matched"<<endl;
//     break;
// }


/////////////////////////////////////
int i=1;
while(i<6){
    if(i==3){
        i++;
        continue;
         
    }
    cout<<i<<endl; //1245
    i++;
   
}
    return 0; 

 }
