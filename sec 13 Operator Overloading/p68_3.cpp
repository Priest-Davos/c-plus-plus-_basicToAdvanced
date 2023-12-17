//162 or 182 demo insertion operatotr overloading
#include<iostream>
using namespace std;
class complex{
    private :
    int real,img;

    public :
    complex(int r=0,int i=0){
        real=r;
        img=i;
    }
   friend complex operator+(complex c1,complex c2);//{
    //     complex temp;
    //     temp.real=c1.real+c2.real;
    //     temp.img=c1.img+c2.img;
    // }
  friend ostream &  operator<<(ostream  &o,complex c);

};

 complex operator+(complex c1,complex c2){
        complex temp;
        temp.real=c1.real+c2.real;
        temp.img=c1.img+c2.img;
    }
     ostream & operator<<(ostream  &o,complex  c){
o<<c.real<<"+"<<c.img<<"i"<<endl;
return o;
    }


int main(){

complex c1(1,2),c2(3,1);
complex c3;
c3=c1+c2;
cout<<c3;
operator<<(cout,c1);
                                          

}