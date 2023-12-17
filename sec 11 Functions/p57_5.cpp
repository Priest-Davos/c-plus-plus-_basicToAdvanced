//124  or 143 or 16  demo-Pass by address & reference
//swap of 2 num

#include<iostream>
using namespace std;

void swap(int *a, int *b)//pass by address
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}

int main()
{
int x=10, y=20;
swap(&x,&y);
cout<<"x = "<<x<<endl;
cout<<"y= "<<y;
}
//pass by reference
void swap(int &a, int &b)
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