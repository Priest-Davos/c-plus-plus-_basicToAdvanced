//193
#include<iostream>
using namespace std;
class your;
class my{
    private:
    int a=10;
    // public:
friend your;
friend void  Test();

};
void Test(){ //friend func
    my m;
    cout<<m.a;
}
class your{ //friend class
    public :
my m;
void fun(){cout<<m.a;}
};
int main(){

}

// Friend functions and classes 
// • Friend functions are global functions
// • They can access member of a class upon their objects
// • A class can be declared as friend on another class
// • All the functions of friend class can access private and protected members of other class 
// class Your;
// class My
// {
// private:int a;
// protected: int b;
// public: int c;
//  friend Your;
// };
// class Your
// {
// public:
//  My m;
//  void fun()
//  {
//  m.a=10;
//  m.b=10;
//  m.c=10;
//  }
// };
// int main()
// {
 
// }