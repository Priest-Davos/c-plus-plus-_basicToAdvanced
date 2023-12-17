#include <iostream>
using namespace std;
int main()
{
    int num = -4;
   
    while (num < 100)
    {
        if(num==2){   cout <<num<< endl; }
        for (int i = 2; i < num; i++)
        {   
           
            if (num % i == 0) {        break;   }
            // else{
            //     cout<<num<<endl;
            // }
            else if (i== num- 1) {    cout <<num<< endl; }
           
        }
        num++;
    }
}