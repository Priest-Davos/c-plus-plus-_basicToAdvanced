//62 or 65 or 36
#include<iostream>
using namespace std;
int main(){
    int option,num1,num2;

    cout<<"Enter num 1 :: ";
    cin>>num1;
    cout<<"Enter num 2 :: ";
    cin>>num2;
cout<<"MENU \n1. ADD \n2. Subtract\n3. MULTIPLY\n4. DIVIDE \noption :: ";
cin>>option;
switch(option){
    case 1 :cout<< num1+num2;
            break;
             case 2 :cout<< num1-num2;
            break;
             case 3 :cout<< num1*num2;
            break;
             case 4 :cout<< num1/num2;
            break;
            default : cout<<"wrong input";

}
}

//his code
// Menu Driven Program using Switch Case
// #include <iostream>
// using namespace std;
// int main()
// {
//  cout<<"Menu"<<endl;
//  cout<<"1. Add\n"<<"2. Sub\n"<<"3. Mul\n"<<"4. Div\n";
// int option;
//  cout<<"Enter your choice no."<<endl;
//  cin>>option;
// int a,b,c;
//  cout<<"Enter two numbers"<<endl;
//  cin>>a>>b;
// switch(option)
//  {
//  case 1: c=a+b;
//  break;
//  case 2: c=a-b;
//  break;
//  case 3: c=a*b;
//  break;
//  case 4: c=a/b;
//  break;
//  }
//  cout<<c<<endl;
// return 0;
// }