//169 or 189 Demo constuctor in inheritance
#include<iostream>
using namespace std;
class Base{
    public :
    Base(){  cout<<"Base class default constuctor"<<endl; }
    Base(int a){ cout<<"Base class parameterized constructor  "<<a<<endl; }
    };

class Derived:public Base{
    public:
    Derived(){ cout<<"Derived class default constuctor"<<endl;}
    Derived(int a){cout<<"Derived class parameterized constructor"<<endl;}
    Derived(int a,int c): Base (a){
       cout<<"Derived class 2 parameterized constuctor"<<"c="<<c<<endl;
     }

    };
int main(){
    Derived a();//no constructor called for it??? 
    cout<<"\n\n";

    Derived a2;//Base class default constuctor
    cout<<"\n\n";//Derived class default constuctor
   
    Derived b(2);//Base class default constuctor
    cout<<"\n\n";  //Derived class parameterized constructor
    
    Derived c(5,8);//Base class parameterized constructor
    cout<<"\n\n\n";//Derived class 2 parameterized constuctorc=8
    
}

//His code
// Constructors in inheritance 
// • Constructors of base class is executed first then the constructor of derived class is executed.
// • By default, non-parameterised constructor of base class is executed.
// • parameterised constructor of base class must be called from derived class constructor
// Explain using base and derived class 
// #include <iostream>
// using namespace std;
// class Base
// {
// public:
//  Base(){cout<<"Non-param Base"<<endl;}
//  Base(int x){cout<<"Param of Base "<<x<<endl;}
// };
// class Derived:public Base
// {
// public:
//  Derived(){cout<<"Non-Param Derived"<<endl;}
//  Derived(int y){cout<<"Param of Derived "<<y<<endl;}
 
//  Derived(int x,int y):Base(x)
//  {
//  cout<<"Param of Derived "<<y<<endl;
 
//  }
// };
// int main()
// {
//  Derived d(5,10);
// }