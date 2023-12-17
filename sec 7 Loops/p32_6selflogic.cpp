//74 or 77 find prime number  mine logic
#include <iostream>
using namespace std;
int main(){
    int num;
    bool prime=true;
    cout<<"Enter the number :: ";
    cin>>num;
    for(int i=2;i<num;i++){
        if(num%i==0){
            prime=false;
            cout<<num<<" is not prime number";
            break;
        }
       
    }
    if(num<2){
         cout<<num<<" is not prime number";
    }
    else if(prime==true){
            cout<<num<<" is prime number";
            
        }
}
