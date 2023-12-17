//100 or 103 student exercise 6
//prog to calculate average of all elements of array
#include<iostream>
using namespace std;
int main(){
    int size ,sum=0,i=1;
    float average;
    cout<<"Enter the size of the 1-D Array ::";
    cin>>size;
    int arr[size];
//   cout<<"Enter the elements of the array :: ";
  for(auto & x: arr){
    cout<<i++<<". Enter the element :: ";
    cin>>x;
  }
 cout<<"Entered elements of the array :: ";
   for(auto & x: arr){
    cout<<x<<"  ";

    sum=sum+x;
  }
  average=sum/2.0;
  cout<<"\naverage :: "<<average;
    
}


