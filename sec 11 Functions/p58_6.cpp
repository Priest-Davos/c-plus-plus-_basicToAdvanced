//126  or 145 or 21  demo-return by address
#include<iostream>
using namespace std ;
int * func(int size)
{
    int *p=new int[size];
    for(int i=0;i<size;i++){
        p[i]=i+1;
    }
    cout<<p<<endl;
    return p;

}
int main(){
int *ptr=func(5);
  for(int i=0;i<5;i++){
    cout<<&ptr[i]<<endl;
        cout<<ptr[i]<<endl;
    }
    delete []ptr;

}

