// 97 or 100 adding two matrices
#include<iostream>
using namespace std;
int main(){
    int row,column;
    cout<<"Enter the number of rows ::";
    cin>>row;
      cout<<"Enter the number of column ::";
    cin>>column;
    int m1[row][column],m2[row][column],m3[row][column];
    cout<<"Enter the elements of the first matrix  "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
cin>>m1[i][j];
        }
    }
      cout<<"\nEnter the elements of the second matrix  "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
cin>>m2[i][j];
        }
    }
     cout<<"\nsum of above two matrices is below"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            m3[i][j]=m1[i][j]+m2[i][j];//doing the sum
            cout<<m3[i][j]<<"  ";//printing the sum
        }
        cout<<endl;
    }
    //or can print c matrix separately after sum
      cout<<"\nsum of above two matrices is below"<<endl;
    for(auto& x : m3){
        for(auto& y : x){
            
            cout<<y<<"  ";//printing the sum
        }
        cout<<endl;
    }

//     Enter the number of rows ::3 2
// Enter the number of column ::Enter the elements of the first matrix  
// 3 2 
// 3 2
// 1 1

// Enter the elements of the second matrix  
// 1 1
// 1 1
// 3 2

// sum of above two matrices is below
// 4  3  
// 4  3  
// 4  3  

// sum of above two matrices is below
// 4  3  
// 4  3  
// 4  3  


    

}