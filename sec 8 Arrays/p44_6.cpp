// 94 or 97 Pattren 2
#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"enter the number of rows :: ";
    cin>>rows;
    // for (int i = 1; i <= rows; i++) //mine p2
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //        cout<<"*  ";
    //     }
    //     cout <<"\n";
    // }
    //   for (int i = 0; i < rows; i++) //his p2
    // {
    //     for (int j = 0; j < rows; j++)
    //     {if(i>=j)
    //        cout<<"*  ";
    //     }
    //     cout <<"\n";
    


        for (int i = 0; i < rows; i++) //his p2b
    {
        for (int j = 0; j < rows; j++)
        {if(i>j)
           cout<<"  ";
           else
           cout<<" *";
        }
        cout <<"\n";
    }
}

