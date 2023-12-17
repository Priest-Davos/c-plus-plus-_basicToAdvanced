//202 or 222 or 3 Demo Exception handling Construct
#include<iostream>
using namespace std;
int main(){
    int a=1,b=0,c;
    try{
          if(b==0){
            throw 1;
          }
         c= a/b;
         cout<<c;

    }
    catch(int e){
cout<<"Division by zero";
    }
}