#include<iostream>
using namespace std;
int main(){
    float basicSalary,percent_of_allowances,percent_of_deduc, netsalary;
    cout<<"enter basic salary :: ";
    cin>>basicSalary;
    cout<<"enter percentage of allowances :: ";
    cin>>percent_of_allowances;
    cout<<"enter percent_of_deduc :: ";
    cin>>percent_of_deduc;
     netsalary=basicSalary+basicSalary*(percent_of_allowances/100)-basicSalary*(percent_of_deduc/100);
cout<<"Netsalary = "<<netsalary;
}