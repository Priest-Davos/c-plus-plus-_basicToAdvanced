
// 74 or 77  check prime number
//updated factor program
#include <iostream>
using namespace std;
int main()
{
    int num;
    int count=0;
    cout << "Enter the number :: ";
    cin >> num;

   
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        { 
            count++;
        }
    }
    

        //wrong or incmplete as it will put case of
    //num=1 in prime number as for num==1 count will be 1
    //so just check for case which have exact count of 2 in if so all other case 
    //rest case will be in else part
    //so do 1 case vs all ,,,not all case(prime) vs 1
     // if(count>2){ 
    //     cout<<num<<" is not a prime number";
    // }
    // else {
    //     cout<<num <<" is a prime number";
    // }
     if(count==2){
        cout<<num<<" is a prime number";
    }
    else {
        cout<<num <<" is not a prime number";
    }
   
}
