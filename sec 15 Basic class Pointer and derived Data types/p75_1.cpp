#include<iostream>
using namespace std;
class Base{
public:
void fun1(){
cout<<"Base class fun1"<<endl;
}
void fun2(){
cout<<"Base class fun2"<<endl;
}

};
class Derived : public Base{
public:
void fun3(){
cout<<"Dervied class fun3"<<endl;
}
};
int main(){
    Derived d;
    Base * ptr=&d;
    ptr->fun1();
    // ptr->fun3();//class "Base" has no member "fun3"
    // Here object of  derived class but cant access func of derived class
//---------------------------------------------------------------
    //  Base b;
    //  Derived *p=&b;
    //  a value of type "Base *" cannot be used to initialize
    //   an entity of type "Derived *"
}
