//150 or 169 constructor
#include<iostream>
using namespace std;
class Rectangle{
public :
int length;
int breadth;
void setLength(int l){
    if (l<0){ length=1; }
    else{ length=l; }
}
void setBreadth(int b){
    if (b<0){ breadth=1; }
    else{ breadth=b;}
}
int area(){
    return length*breadth;
}
int perimeter(){
    return 2*(length+breadth);
}
Rectangle(int l=1,int b=1){//work as para and non para way ,, default argument constructor
   setLength(l);
   setBreadth(b);
}
Rectangle(Rectangle &rect){//copy constructor or can deep c.c
   length =rect.length;
   breadth=rect.breadth;
}
};
int main(){
    Rectangle r(10,5);
    cout<<"perimeter is :: "<<r.perimeter()<<endl;
  cout<<"area is :: "<<r.area()<<endl;

    Rectangle r2(r);
    cout<<"r2 length :: "<<r2.length<<endl;
     cout<<"r2 breadth :: "<<r2.breadth<<endl;
     cout<<"area of r2  is :: "<<r2.area()<<endl;

     

}