//student exercise #10
//write a class for rational number(p/q)with overloading + and << operator
#include<iostream>
using namespace std;
class rational{
    private:
    int p;
    int q;
    public:
    rational(int p=1,int q=1){
        this->p=p;
        this->q=q;
    }
    rational(rational &r)
 {
 this->p=r.p;
 this->q=r.q;
 }
    friend ostream & operator<<(ostream & out,rational &r); 
    friend rational operator+(rational r1,rational r2);  
};

ostream & operator<<(ostream & out,rational &r){
    out<<r.p<<"/"<<r.q;
    return out;
}
rational operator+(rational r1,rational r2){
    rational temp ;
    temp.p=r1.p*r2.q+r2.p*r1.q;
    temp.q=r1.q*r2.q;
    return temp;
}
int main(){
    rational r1(3,4),r2(2,5),r3(r1);
    cout<<"r1="<<r1<<endl;
    cout<<"r2="<<r2<<endl;
    r3=r1+r2;//r3=operator+(r1,r2);
    cout<<"sum of "<<r1<<" and "<<r2 <<" is "<<r3<<endl;
}
