// 49 quiz max of three num
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the three numbers :: ";
    cin >> a >> b >> c;
    // if(a>b && a>c){
    //     cout<<a<<" is greater .";

    // }
    // else if(b>c){
    //     cout<<b<<" is greater.";
    // }
    // else {
    //     cout<<c<<" is greater.";
    // }
    if (a > b)
    {
        if (a > c)
        {
            cout << a << " is greater .";
        }
        else{
             cout << c << " is greater .";
        }
    }
    else
    {
        if (b > c)
        {
            cout << b << " is greater.";
        }
        else
        {
            cout << c << " is greater.";
        }
    }
}