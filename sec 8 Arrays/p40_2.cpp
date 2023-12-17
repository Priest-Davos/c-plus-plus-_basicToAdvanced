//87 or 90 finding max elements of array
#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array :: ";
    cin>>size;

    int arr[size];
    
    cout<<"Enter the elements of the array :: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    // auto max=INT64_MIN;
    int max=arr[0];
   for(auto x : arr){
    if(x>max){
        max=x;
    }
    
   }
   cout<<"maxi is :: "<<max;
}