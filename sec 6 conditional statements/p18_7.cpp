//50 find nature of quadratic roots
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a,b,c,d,r1,r2;
cout<<"Enter the coffecent value of x,y,z ";
cin>>a>>b>>c;
d=b*b-4*a*c;
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
if(d==0){
    cout<<"discriminant = "<<d<<" .So ,roots are real and equal"<<endl;
    cout<<"roots are "<<r1<<" and "<<r2;
}
else if(d>0){
 cout<<"discriminant = "<<d<<" .So , roots are real and unequal"<<endl;
    cout<<"roots are "<<r1<<" and "<<r2;
}
else{  cout<<"discriminant = "<<d<<" .So , roots are imaginary";
      
   
}
}