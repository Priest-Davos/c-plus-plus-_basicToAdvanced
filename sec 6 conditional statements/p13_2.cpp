// 42 quiz number is =ve or -ve
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the number :: ";
    cin >> num;
    if (num > 0)
    {
        cout << num << " is positive";
    }
    else if (num == 0)
    {
        cout << "not defined";
    }
    else
    {
        cout << num << " is negative";
    }
}