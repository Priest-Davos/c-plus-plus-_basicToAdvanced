//158 or 178 or 2   demo operator overloading
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
    void setComplex(int r,int l);
void printComplex();
complex operator+(complex c)  ;

};
void complex :: setComplex(int r=1,int i=2){
    real=r;
    img=i;
}
void complex :: printComplex(){
    cout<<"complex number :: "<<real<<" + "<<img<<"i"<<endl;
}
complex complex::operator+(complex c){
    complex temp;
    temp.real=real+c.real;
    temp.img=img+c.img;
    return temp;
}


int main(){
    // cout<<"Enter the complex number "<<endl;
    complex c1(2,4);
    complex c2;
    c2.setComplex(5,3);

    c1.printComplex();
    c2.printComplex();

    complex c3;
    c3=c1+c2;
    c3.printComplex();
    


}


//His code
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
//  Complex operator+(Complex c)
//  { 
//  Complex temp;
//  temp.real=real+c1.real; 
//  temp.img=img+c1.img;
//  return temp;
//  }
//  };
// int main()
// {
//  Complex c1(5,3),c2(10,5),c3;
 
//  c3=c1+c2;
 
//  c3.display();
// }

