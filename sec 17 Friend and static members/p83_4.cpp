//199 or 219 Demo Inner Class
#include<iostream>
using namespace std;
class outer{

    public:
    int x=7;
    static int y;
    void fun(){
        cout<<i.a;
    }

    class inner{
        int b;
        protected: 
        int c=0;
public :
int a=9;
void fun(){
cout<<"I am inner class function";
}
void fun2(){
    // cout<<x; cant access non styatic member;
    cout<<y;
}


    };
    inner i;

};
int outer:: y=3;
int main(){
    outer::inner i;
    i.fun();
    i.fun2();

}

