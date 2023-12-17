//76 or 79 prog to display digits of a number
#include<iostream>
using namespace std;
int  main(){
    int num;
cout<<"enter the number :: ";
cin>>num;
int lastDigit;
while(num>0){
    lastDigit=num%10;
    num=num/10;
    cout<<lastDigit;
    if( num!=0){
cout<<",";
    }
}

}