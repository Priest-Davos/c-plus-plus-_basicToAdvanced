//70 or 73 sum of n numbers
#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
cout<<"Enter the number :: ";
cin>>num;
for(int i=0;i<=num;i++){
   sum=sum+i;  // or sum+=i
}
cout<<"sum of first "<<num<<" number is :: "<<sum;
}




















