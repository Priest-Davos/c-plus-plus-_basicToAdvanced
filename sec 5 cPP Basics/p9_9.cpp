//demo enum and typedef
#include <iostream>
using namespace std ;
enum day{mon,tue,wed,thu,fri,sat,sun};
enum department{cse=5,ECE};
// #define god 2;   ???


typedef int marks;
int main(){
    // cout<<sun;
day d;
d=tue;


department dep;
dep=ECE;  //6

cout<<dep<<endl;


marks m1=10,m2=20,m3=5;
cout<<m1;  //10


}
