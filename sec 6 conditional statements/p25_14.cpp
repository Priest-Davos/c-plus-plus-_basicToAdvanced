// 63 or 66 or 38
#include <iostream>
using namespace std;
int main()
{
    double TotalAmount, discount = 0;
    cout << "Enter the total Amount :: ";
    cin >> TotalAmount;
    if (TotalAmount < 100)
    {
        cout << "sorry no discount\n";
    }
    else if (TotalAmount >= 100 && TotalAmount < 500)
    {
        discount = TotalAmount * 0.1;
        cout << "Hurray you are eligible for 10% discount" << endl;
    }
    else if (TotalAmount >= 500)
    {
        discount = TotalAmount * 0.2;
        cout << "Hurray you are eligible for 20% discount" << endl;
    }
    cout << "Discount :: " << discount;
    cout << "\nbill after discount is " << TotalAmount - discount;
}

// Program to Calculate Discounted Bill Amount
// #include<iostream>
// using namespace std;
// int main()
// {
//  float billAmount;
//  float discount=0.0;

//  cout<<"Enter Bill Amount:";
//  cin>>billAmount;
//  if(billAmount>=500)
//  discount=billAmount*20/100;
//  else if(billAmount>=100 && billAmount<500)
//  discount=billAmount*10/100;

//  cout<<"Bill Amount is:"<<billAmount<<endl;
//  cout<<"Discount is :"<<discount<<endl;
//  cout<<"Discounted Amount is:"<<billAmount-discount<<endl;

// }