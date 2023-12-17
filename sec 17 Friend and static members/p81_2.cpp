#include<iostream>
using namespace std;
class Test{
    int a=0;
    public :
    static int count ;
    static int getCount(){
      //  cout<<a;//cant access non static data member
        return ++count;
    }

};
int Test::count;
int main(){
Test t;
cout<<t.count<<endl;
cout<<Test::getCount();
}