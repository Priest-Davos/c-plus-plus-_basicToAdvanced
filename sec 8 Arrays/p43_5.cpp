// 93 or 96 Pattren 1
#include <iostream>
using namespace std;
int main()
{
    int num = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << num++;
            if (num == 10 || num<9)
            {
                cout <<"   ";//3
            }
            else if(num>9)
            {
                cout <<"  ";//2
            }
            // else{
            //      cout <<"   ";//3
            // }
        }
        cout << endl;
    }
}