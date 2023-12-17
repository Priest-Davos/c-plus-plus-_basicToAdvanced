
// 72 or 75  print factors of a number
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number :: ";
    cin >> num;

    cout << "factors are ::";
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i;
            if (i != 8)
            {
                cout << ",";
            }
        }
    }
}
