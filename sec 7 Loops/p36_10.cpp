//quiz 78 81 check if a number is a palindrome number
#include<iostream>
using namespace std;
int main(){
    int og_num,c_num,rev=0,ld;
    cout<<"Enter the number :: ";
    cin>>og_num;
    c_num=og_num;
    while(c_num>0){
        ld=c_num%10;
        c_num=c_num/10;
        rev=rev*10+ld;
    }
    if(rev==og_num){
        cout<<og_num<<" is plindrone number";
    }
    else{
        cout<<og_num<<" is not a palindrone number";
    }

}
