//Program for area of a triangle
#include<iostream>
using namespace std ;
int main(){
    float height,base,area;

    cout<<"Enter the bae and height of triangle :: ";
    cin>>height >>base ;
    area=0.5*(base*height);
    cout<<"area = "<<area<<" unit square";
}