//210 or 230 Template functions and classes
//Template class in p89 
#include <iostream>
using namespace std;

//Simple template for max of two number
template <class T>
T maxi(T a, T b) { return a > b ? a : b; }
template <class T,class R>
void add(T a, R b){
    // return a+b;
    cout<<a+b;
}
int main()
{
    cout << "maxi  "<<maxi(5, 7)<<endl;
 cout <<"maxi " << maxi(5.92, 5.9)<<endl;

//  cout<<"add  "<<add(1.7,7)<<endl;
add(1,7.6);
}



