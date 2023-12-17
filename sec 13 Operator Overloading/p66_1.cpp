// complex number
#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;
public:
void setComplex(int real,int img);
void printComplex();
complex sumComplex(complex  c1,complex  c2){
    complex c3;
c3.setComplex(c1.real+c2.real,c1.img+c2.img);
return c3;
}
complex operator+(complex c2){// this is operator overloading 
complex temp;
temp.real=real+c2.real;
temp.img=img+c2.img;
return temp;

}

};
void complex:: setComplex(int real,int img){
    this->real=real;
    this->img=img;
}
void complex::printComplex(){
cout<<"entered complex num is :: "<<real<<" + "<<img<<" i"<<endl;
}
int main()
{
    complex c1;
    complex c2;
    c1.setComplex(1,2);
    c2.setComplex(7,9);
    c1.printComplex();
    c2.printComplex();
    complex c3;
    c3=c3.sumComplex(c1,c2);

    complex c4;
    // c4=c3.sum(c2);
     c4=c3+c2;//this is operator overloading

    c3.printComplex();
    c4.printComplex();


}