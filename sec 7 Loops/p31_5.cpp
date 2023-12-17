
// 73 or 76  check for perfect number
//updated factor program

#include <iostream>
using namespace std;
int main()
{
    int num;
    int sum=0;
    cout << "Enter the number :: ";
    cin >> num;

    // cout << "factors are ::";
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        { sum+=i;
            // cout << i;
            // if (i != 8)
            // {
            //     cout << ",";
            // }
        }
    }
    if(2*num==sum){
        cout<<num <<"  is perfect number";

    }
    else{
        cout<<num <<"  is  not perfect number";
    }
}
