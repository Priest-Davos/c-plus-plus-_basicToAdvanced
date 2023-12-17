//160 or 180 or 4   demo friend operator overloading
#include<iostream>
using namespace std;
class complex{
    private:
    int real;
    int img;
    public : 
   
    complex(int r=0,int i=0){
        real=r;
        img=i;
    }
    void displaySum(){
        cout<<"sum :: "<<real<<" + "<<img<<" i"<<endl;
    }
    //this is friend function
    friend complex operator+(complex c1,complex c2);
    //  friend complex operator+(complex c1); not working this way
};

//body of friend funcyion
complex operator+(complex c1,complex c2){//complex operator+(complex &c1,complex &c2){  
    complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;

}
int main(){
    complex c1(2,6),c2(3,2),c3;
    c3=c1+c2;
    c3.displaySum();

    
}



// Operator Overloading using Friend Functions 
// #include <iostream>
// using namespace std;
// class Complex
// {
// private:
//  int real;
//  int img;
// public:
//  Complex(int r=0,int i=0)
//  {
//  real=r;
//  img=i;
//  } 
//  void display() 
//  { 
//  cout<<real<<“+i”<<img<<endl; 
//  } 
// friend Complex operator+(Complex c1,Complex c2);
//  };
// Complex operator+(Complex c1,Complex c2)
// { 
//  Complex temp;
//  temp.real=c1.real+c2.real; 
//  temp.img=c1.img+c2.img;
//  return temp;
// }
// int main()
// {
//  Complex c1(5,3),c2(10,5),c3;
 
//  c3=c1+c2;
 
//  c3.display();
// }