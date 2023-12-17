// 42 quiz number is odd or even
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the number :: ";
    cin >> num;
    if (num/2 == 0)
    {
        cout << num << " is even";
    }
   
    else
    {
        cout << num << " is odd";
    }
}