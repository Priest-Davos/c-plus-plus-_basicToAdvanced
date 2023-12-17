//117 or 136 demo func template
//template for finding maxi number

#include<iostream>
using namespace std;
template<class T>
T maxi(T a,T b){
    return a>b?a:b;
}
int main(){
    cout<<maxi(5,7)<<endl;
     cout<<"maxi is :: "<< maxi(5.9,7.9)<<endl;
       cout<<"maxi is :: "<< maxi(5,7);


}


//his
// template<class T>
// T maxim(T a,T b)
// {
// return a>b?a:b;
// }
// int main()
// {
//  cout<<maxim(12,14)<<endl;
//  cout<<maxim(2.3,1.4)<<endl;
//  cout<<maxim(2.3f,5.6f)<<endl;
// return 0;
// }