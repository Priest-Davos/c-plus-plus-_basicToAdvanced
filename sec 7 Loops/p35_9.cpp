//78  or 81 program to reverse a number
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number :: ";
    cin>>num;
    int rev=0,ld;
    while(num>0){
      ld= num%10;
      rev=ld+rev*10;
    //   cout<<rev<<endl;
      num=num/10;
       
        
    }
    cout<<"reverse :: "<<rev;
}