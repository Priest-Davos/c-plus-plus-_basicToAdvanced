//166   demo inheritance
#include<iostream>
using namespace std;
class rectangle{
private:
double length;
double breadth;
public:
rectangle(int length=1,int breadth=1){
    this->length=length;
    this->breadth=breadth;
}
void setLength(int l){
this->length=l;
};
int getLength(){return length;}
void setBreadth(int b){this->breadth=b;}
double getBreadth(){return breadth;}
double area(){return length*breadth;}
double perimeter(){return 2*(length+breadth);}
 ~rectangle(); //destructor
};
// void rectangle :: setLength(int l){
// this->length=l;
// }


class cuboid :public rectangle{
 private:
         double height;
 public:
    cuboid(double l=0,double b=0,double h=0){
        this->setLength(l);
        this->setBreadth(b);
        this->height=h;
    }
    void setHeight(double h)  {this->height=h;}
    double getHeight(){return height;}
    double volume(){return getLength()*getBreadth()*getHeight();}
    double area(){return 2*((getLength()*getBreadth())+(getBreadth()*height)+(getHeight()*getLength()));}

    friend ostream & operator<<(ostream & out,cuboid  &c);
    };
     ostream & operator<<(ostream & out,cuboid & c){
        out<<"length::"<<c.getLength()<<"  ,Breadth ::"<<c.getBreadth()<<"  Height ::"<<c.height;
        return out;
     }

int main(){
    rectangle r1(10,5);
    cout<<"Area of cube ::"<<r1.area()<<endl;
    cuboid cb1(10,5,5);
    cout<<cb1<<endl;
    cout<<"Length of cuboid :: "<<cb1.getLength()<<endl;
    cout<<"Height of cuboid :: "<<cb1.getHeight()<<endl;
    cout<<"Area of cuboid :: "<<cb1.area();

}
