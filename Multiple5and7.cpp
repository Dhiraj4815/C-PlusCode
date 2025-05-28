#include <iostream>
using namespace std;
int main()
{
    
    while (true)
    {
     int n;
     cin>>n;
        if(n%7==0 && n%5 ==0){
            cout<<"Multiple/divisible by 5 & 7: "<<n<<endl;
            break;
        }
        else cout<<"Not Multiple/divisible by 5 & 7 : "<<n<<endl;
      
    }
    return 0;
}