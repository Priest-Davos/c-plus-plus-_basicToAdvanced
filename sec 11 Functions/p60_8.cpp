//154 or 135 Student Exercise
//Program for linear search Using Function
#include <iostream>
using namespace std;

int LS(int * arr , int key,int size){ //or int arr[]

for(int i =0;i<size;i++){
   if(arr[i]==key){
    return i;
   }  
}
 return -1;
}

int main(){
int size;
cout<<"enter the size of the array :: ";
cin>>size;
int arr[size];
cout<<"Enter "<<size<<" elements :: ";
for(int i =0;i<size;i++){
    cin>>arr[i];
}
cout<<"Entered elements are :: ";
// for(int x:arr){
//     cout<<x;
// }
for(int i =0;i<size;i++){
    cout<<arr[i];
    if(i<size-1){
        cout<<",";
    }
}
int key;
cout<<"\nenter the key to be searched :: ";
cin>>key;
int res=LS(arr,key,size);
if(res<0)
cout<<"Element not found";
else
cout<<"Element found at index :: "<<res;

}