//213 or 233  demo constant qualifierr
#include<iostream>
using namespace std;
#define x 20;
class Demo{
    public :
    int a=20;
    void disp() const{   //
    //  cout<<"a="<<++a<<endl; //cant modify class data  here
    }
};
void fun( int & a);
int main(){
cout<<"x ::"<<x;
cout<<endl;
// const int y=29;
// cout<<++y;//cant modify constant

//value is locked
int y=12;
const  int * ptr=&y;//ptr is pointer which is pointing to constant integer
// *ptr=670;//cant modify


//pointer is locked
int z=80;
int * const ptr2=&y; //ptr2 is a constant which is pointer to integer
(*ptr2)++;
cout<<"*ptr2 ::"<<*ptr2<<endl;
// ptr2=&z;//cant reassign



//neither modify nor reassign
const int * const ptr3=&y;//value and pointer both locked
// ++ *ptr3;//cant modify
// ptr3=&z;//cant reassign


Demo d;
d.disp();


int a=10;
cout<<"\n  before  callin  fun function:: "<<a<<endl;
fun(a);

}
void fun(const int & a){//
    cout<<"This is fun function";
    // a++; //cant modify
    cout<< "   a :: "<<a;
}
