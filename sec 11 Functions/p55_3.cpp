//119 or 138 or 14  demo-Default Arguments
//pasted from pdf
#include <iostream>
using namespace std;
int sum(int a,int b,int c=0)
{
return a+b+c;
}
int main()
{
 cout<<sum(10,20,3)<<endl;
return 0;
}