//77 or 80 prog to chech armstrong number
#include<iostream>
#include<cmath>
using namespace std;
int  main(){
    int num;
cout<<"enter the number :: ";
cin>>num;
int lastDigit;
int copied_num=num,sum=0;
while(copied_num>0){
    lastDigit=copied_num%10;
sum=sum + lastDigit*lastDigit*lastDigit;
// cout<<"sum"<<sum<<endl;
    copied_num=copied_num/10;   
  
}
// cout<<sum<<" ,num= "<<num;
if(sum==num){
cout<<num<<" is armstrong number";
}else{
    cout<<num<<" is not armstrong number";
}

}