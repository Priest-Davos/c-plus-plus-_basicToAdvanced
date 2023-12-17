//126  or 145 or 21  demo-return by reference
#include<iostream>
using namespace std ;
int & func(int &a )
{
   
return a;
}
int main(){
int a=10;
cout<<func(a);
func(a)=25;
cout<<a;

}

