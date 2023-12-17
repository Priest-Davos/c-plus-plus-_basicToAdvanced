// 46  check if workking hour
#include <iostream>
using namespace std;
int main()
{
    int h;
    cout << "enter the HOUR :: ";
    cin >> h;
    if (h >= 9  && h<=18)
    {
        cout << h << " is working hour";
    }
   
    else
    {
        cout << h << " is Leisure hour";
    }
}