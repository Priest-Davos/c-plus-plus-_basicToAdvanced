//86  5.adding all elements of array
#include<iostream>
using namespace std;

int main(){
    int size,sum=0;
   
cout<<"Enter the size of the array :: ";//getting size of array
cin>>size;
 int arr[size];

cout<<"Enter the elements of the array :: ";//getting elements of array
for(int i=0;i<size;i++){
    cin>>arr[i];
}

cout<<"Entered elements are :: ";//printing entered elements
for(auto x : arr ){
    cout<<x<<"   ";
    sum=sum+x;                   //doing sum
}

cout<<"\nsum :: "<<sum;//printing sum of elements of array
}