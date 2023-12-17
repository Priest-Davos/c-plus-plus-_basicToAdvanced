//219 or  239 demo destructor
#include<iostream>
using namespace std;
class Test{
   public :
    Test(){cout<<"Test created "<<endl; }
    ~Test(){    cout<<"Test destroyed "<<endl; }
};

class test2{
    public :
    int* p;
    test2(){
            int *p=new int[2];
             cout<<p;
              }
   
    ~test2(){ delete []p; }
};
int main(){
    Test t;

    Test *p=new Test;
    delete p;

    cout<<endl;
     test2 t2;

}
