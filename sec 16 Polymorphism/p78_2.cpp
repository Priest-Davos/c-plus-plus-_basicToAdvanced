//188 or 208 Demo runtime polymorphism
#include<iostream>
using namespace std;
class car{
public :
//  virtual void start(){
//     cout<<"dead";
//  }
// no need to write body above so commented
virtual void start()=0;
};
class maruti : public car{
    public:
void start(){
    cout<<"Maruti started"<<endl;
}
};
class swift : public car{
    public:
void start(){
    cout<<"swift started"<<endl;
}
};
int main(){
    car * c=new maruti();
     c->start();//make car func virtual
c=new swift();
c->start();

}


// Polymorphism 
// • Same name different actions
// • Runtime Polymorphism is achieved using function overriding
// • Virtual functions are abstract functions of base class
// • Derived class must override virtual function
// • Base class pointer pointing to derived class object and a override function is called 
// Summary: class car is defined, then sub classes override, then base class method made as 
// virtual the pure virtual 
// class Car
// {
// public:
//  virtual void start()=0;
// };
// class Innova:public Car
// {
// public:
//  void start(){cout<<"Innova Started"<<endl;}
// };
// class Swift:public Car
// {
// public:
//  void start(){cout<<"Swift Started"<<endl;}
// };
// int main()
// {
//  //Car c;
//  Car *p=new Innova();
//  p->start();
//  p=new Swift();
//  p->start();
 
// }