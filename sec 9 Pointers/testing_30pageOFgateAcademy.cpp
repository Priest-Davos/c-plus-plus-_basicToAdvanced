#include<iostream>
using namespace std;
int main (){
int arr[2]={3,7};
cout<<arr<<endl;//0x6fff08
cout<<*arr<<endl;      //3

//below two statements are equal. arr is address which
// is address of arr[0]
cout<<arr+1<<endl;    //0x6fff0c
cout<<&arr[0]+1<<endl;  //0x6fff0c

cout<<*(arr+1)<<endl;
}