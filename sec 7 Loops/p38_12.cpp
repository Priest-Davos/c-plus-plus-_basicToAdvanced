//80 or 83 GCD
#include<iostream>
using namespace std;
int main(){
    int x,y;
cout<<"Enter two numbers ::";
cin>>x>>y;
while(x!=y){
    if(x>y){
        x=x-y;
    }
    else if(y>x){
        y=y-x;
    }

}
cout<<"GDC is "<<x;
}