//114 or 133 quiz func for adding 2 num
#include<iostream>
#include <cmath>
using namespace std;
float max(int a,int b,int c);
int power(int a,int b);
float sum(float a,float b){
return a+b;
}
int main(){
cout<<"Sum is :: "<<sum(1,2.2);
cout<<"\n\nquiz2\n";
  int a,b,c;
cout<<"enter three number ::";
cin>>a>>b>>c;
cout<<max(a,b,c)<<"  is greater.";

cout<<"\n\nquiz3\n";
int num,n;
cout<<"Enter the num and the power respectively :: ";
cin>>num>>n;
cout<<"ans :: "<<power(num,n);

}
//114 or 133 quiz func for finding maxi of 3 num

float max(int a,int b,int c){
if(a>b&&a>c){
    return a;
}
else if(b>c){
    return b;
}
else
return c;
}

//114 or 133 quiz calculate m power of n
int power(int a,int b){
    return pow(a,b);
}




  