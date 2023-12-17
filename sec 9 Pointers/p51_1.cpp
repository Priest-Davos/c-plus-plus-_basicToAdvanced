//106 or 109 Dynamic memory allocation 
//107 or 110 pointer arithmetic operition


#include<iostream>
using namespace std;
int main(){
int *p;
p=new int [4];
// int arr[4];
cout<<"size of dynamic array ::"<<sizeof p<<endl;

cout<<"Enter the elements of dynamic array :: ";
for(int i=0;i<4;i++){cin>>p[i];}

// cout<<"dynamic array element are :: "; //printing
// for(int i=0;i<4;i++){ cout<<p[i]<<"  ";}


// cout<<"\ndynamic array element are :: ";//printing after deleting
// for(int i=0;i<4;i++){ cout<<p[i]<<"  ";}

cout<<"*p :: "<<*p<<endl; //9         //value
cout<<"p :: "<<p<<endl;    //address
cout<<"(p+1) :: "<<p+1<<endl;  //address
cout<<"*(p+1) :: "<<*(p+1)<<endl;//8
cout<<"(p+2) :: "<<p+2<<endl;    //address
cout<<"*(p+2) :: "<<*(p+2)<<endl;//7
cout<<"(p-2) :: "<<p-2<<endl;

int *q=&p[2];
cout<<"*(p-2) :: "<<*(p-2)<<endl;
cout<<"*q :: "<<*q<<endl;//7
cout<<"p-q :: "<<p-q<<endl;
// Enter the elements of dynamic array :: 9 8 7 6
// *p :: 9
// p :: 0xc316b8
// (p+1) :: 0xc316bc
// *(p+1) :: 8
// (p+2) :: 0xc316c0
// *(p+2) :: 7
// (p-2) :: 0xc316b0
// *(p-2) :: -1078626790
// *q :: 7
// p-q :: -2



delete []p;
p=nullptr;

}