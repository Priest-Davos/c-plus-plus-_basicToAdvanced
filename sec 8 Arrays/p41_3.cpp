//88 or 91 Linear Search
#include <iostream>
using namespace std;
int main(){
    int size,key;
    cout<<"Enter the size of the array :: ";
    cin>>size;

    int arr[size];
    
    cout<<"Enter the elements of the array :: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

      cout<<"Enter the element to be searched :: ";
    cin>>key;

   for(int i=0; i<size; i++){
        if(key==arr[i]){
            cout<<"Element found at index :: "<<i;
            break;
        }
        else if(i==size-1){
            cout<<"Element not Found";
        }
        
   }
}