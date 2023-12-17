//98  or  101 demo - 2D Arrays
//input element using for each loop
#include <iostream>
using namespace std;
int main(){
    int row,column;
    cout<<"Enter the row and column of matrix :: ";
    cin>>row>>column;
    int arr[row][column];
    for(auto& x :arr){
        for(auto& y :x){
            cin>>y;
        }
    }
    cout<<"\nEntered elements are :: ";
     for(auto& x :arr){
        for(auto& y :x){
            cout<<y<<"  ";
        }
        cout<<endl;
    }
}