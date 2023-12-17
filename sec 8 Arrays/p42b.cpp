//89 or 92 Linear Search
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

 int mid,s=0,l=size;
bool isFound =false;
//    for(int i=0; i<size; i++){  wrong loop  use while
while(s<l){
   
         mid=(s+l)/2;
        if(key==arr[mid]){
            cout<<"s="<<s<<"  e="<<l<<endl;
        cout<<"\n";
            cout<<"Element found at index :: "<<mid;
            isFound=true;
            break;
        }
        else if(key<arr[mid]){
            l=mid; 
             cout<<"s="<<s<<"  e="<<l<<endl;
           
        }
         else if(key>arr[mid]){
            s=mid;
            cout<<"s="<<s<<"  e="<<l<<endl;
        }
        // for(auto x:arr){
        //     cout<<x<<",";
        // }
        // cout<<"\n";
        
   }
   if(isFound==false){
    cout<<"Element not found";
   }
}