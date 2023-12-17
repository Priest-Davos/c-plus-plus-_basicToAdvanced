//206 or 226 Demo All about throw
#include<iostream>
using namespace std;
class MyException:public exception{

};
int division(int a,int b) throw(MyException){
if(b==0)
// throw string ("exception caught -> div by zero");
throw MyException ();
return a/b;
}
int main(){
int a=9,b=0,c;
    try{
        c=division(a,b);
        cout<<c;
    }
    // catch(string e){cout<<e; }
    catch(MyException e){
        cout<<"Xception caught";
    }
}
