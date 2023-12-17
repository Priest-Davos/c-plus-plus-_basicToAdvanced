//235 Demo preprocessor directive(5:26)
#include<iostream>
#define PI 3.145  //1
#define o cout<<    //2
#define u <<

#define SQR(x)  (x*x)   //3
using namespace std;
#define MSG(x) #x     //4

#ifndef PI          //5
   #define PI 3
   #endif

int main(){
// cout<<PI;
o PI u endl;
o endl;
o  MSG(sqr(5) :: ) u SQR(5) u endl;
o MSG(Hello) u endl;
}