//121  or 140 or 16  demo-Pass by value
//swap of 2 num
//pasted from pdf
#include<iostream>
using namespace std;
void swap(int a, int b)
{
int temp;
temp=a;
a=b;
b=temp;
}
int main()
{
int x=10, y=20;
swap(x,y);
cout<<"x = "<<x<<endl;
cout<<"y= "<<y;
}