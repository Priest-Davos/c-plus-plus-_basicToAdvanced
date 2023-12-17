// student exercise #11
// class to demonstrate polymorphism
#include <iostream>
#include <cmath>
using namespace std;

class shape
{
private:
    double length, breadth;

protected:
    double radius;

public:
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;

    void setLength(int l) { this->length = l; }
    double getLength() { return length; }
    void setBreadth(int b) { this->breadth = b; }
    double getBreadth() { return breadth; }
    void setRadius(int r) { this->radius = r; }
    double getRadius() { return radius; }
};
class rectangle : public shape
{
public:
    rectangle(double l, double b)
    {
        this->setLength(l);
        this->setBreadth(b);
    }
    double getArea() { return getLength() * getBreadth(); }
    double getPerimeter() { return 2 * (getLength() + getBreadth()); }
};
class circle : public shape
{

public:
    circle(double r) { this->radius = r; }
    double getArea() { return M_PI * pow(radius, 2); }
    double getPerimeter() { return 2 * 3.14 * radius; }
};
int main()
{
    shape *s = new circle(10.0);
    // dont use s.getArea() below;
    cout << "area of circle :: " << s->getArea() << endl; // dont use s,.getArea()
    cout << "perimeter of circle :: " << s->getPerimeter() << endl;

    s = new rectangle(10, 5);
    cout << "area of rectangle ::" << s->getArea() << endl;
    cout << "perimeter of rectangle ::" << s->getPerimeter() << endl;
}