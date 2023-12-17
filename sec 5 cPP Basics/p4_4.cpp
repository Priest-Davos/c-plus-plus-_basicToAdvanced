//roots of quadratic equation ax^2+bx+c=0
#include <iostream>
#include<cmath>
using namespace std;

int main(){
    float a,b,c  ,d,r1,r2;
cout<<"Enter tha coefficint values i.e a , b , c :: ";
cin>>a>>b>>c;
d=pow(b,2)-(4*a*c);
r1= (-b + sqrt(d) )/(2*a) ;
r2= (-b - sqrt(d) )/(2*a) ;
cout<<"d="<<d<<"   r1= "<<r1<<"    r2="<<r2 ;

}