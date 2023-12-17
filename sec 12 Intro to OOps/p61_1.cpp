#include<iostream>
using namespace std;
class Rectangle{
public :
int length;
int breadth;
int area(){
    return length*breadth;
}
int perimeter(){
    return 2*(length+breadth);
}
};
int main(){
    Rectangle r;
Rectangle *p;
p=&r;
p->length=10;
p->breadth=15;
cout<<"Area is "<<p->area();


//creating object in Heap
Rectangle *r2=new Rectangle();
r2->length=1;
r2->breadth=2;
cout<<"Perimeter is "<<r2->perimeter();
delete r2;

}