//237  6-Demo namespace
#include<iostream>
using namespace std;
namespace f{
    void fun(){
        cout<<" i m fun from f namespace"<<endl;
    }
};
namespace f2{
    void fun(){
        cout<<" i m fun from f2 namespace"<<endl;
    }
}

using namespace f;
int main(){

fun();
f2::fun();
}
