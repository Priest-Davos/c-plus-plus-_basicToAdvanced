#include<iostream>
using namespace std;
class complex{
private :
int real;
int img;
public:
complex(int r=1,int i=1){
    this->real=r;
    this->img=i;
}
// complex(complex & r){
// real=r.real;
// img=r.img;

// }
friend ostream & operator<<(ostream & os,complex &c);
 complex operator+(complex r);

};
ostream & operator<<(ostream  & os,complex & c){
    os<<c.real<<"+"<<c.img<<"i";
    return os;
}
complex complex::operator+(complex r){
    complex temp;
    temp.real=real+r.real;
    temp.img=img+r.img;
    return temp;

}
int main(){
    complex c1(2,3);
    complex c2(4,8);
    cout<<"c1 is "<<c1<<endl;
    cout<<"c2 is "<<c2<<endl;
    complex c3=c1.operator+(c2);// error
    // complex c3=c1+c2;
    cout<<"sum of "<<c1<<"and "<<c2<<" :: "<<c3;



}