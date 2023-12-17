// 64 or 67 sudent exercise- check leap year
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter the year :: ";
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)    //check year end with zero
        {
            if (year % 400 == 0)
            {
                cout << year << "  is Leap year";
            }
            else
            {
                cout << year << " is not a leap year";
            }
        }
        else
        {
            cout << "leap year";
        }
    }
    else
    {
        cout << year << " is not a leap year";
    }
}