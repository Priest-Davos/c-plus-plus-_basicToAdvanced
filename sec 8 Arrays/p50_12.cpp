//101 or 104 student exercise 7
//multiplication of matrices
//me will do later
//his code pasted below main function
#include <iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    //.............

    cout<<"enter the number of rows and column of first matix :: ";
    cin>>r1>>c1;
    int mat1[r1][c1];

    //taking input of mat 1
    cout<<"Enter the elements of the mat 1 \n";
    for(auto & x:mat1){
        for(auto & y : x) {  cin>>y;  }
    }

//..................

    cout<<"enter the number of rows and column of second matix :: ";
    cin>>r2>>c2;
//taking input of mat 2
     int mat2[r2][c2];
    cout<<"Enter the elements of the mat 2  \n";
    for(auto & x:mat2){
        for(auto & y : x) {  cin>>y;  }
    }

    //.......................

//display mat 1
cout<<"\ndisplay mat 1\n";
for(auto & x : mat1){
    for(auto & y : x){ cout<<y<<"  ";  }
    cout<<endl;
}
//display mat 2
cout<<"\ndisplay mat 2\n";
for(auto & x : mat2){
    for(auto & y : x){cout<<y<<"  "; }
    cout<<endl;
}


//multiplication
int mat3[r1][c2];
for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
mat3[i][j]=mat1[i][j]*mat2[i][j]+mat1[i][j]*mat2[j][i];
    }
}

cout<<"\n mat 3 \n";
for(auto & x : mat3){
    for(auto & y : x){cout<<y<<"  "; }
    cout<<endl;
}



}


// Program to Multiply Matrices 
// #include <iostream>
// using namespace std;
// int main()
// {
//  int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;
 
//  cout << "Enter rows and columns for first matrix: ";
//  cin >> r1 >> c1;
//  cout << "Enter rows and columns for second matrix: ";
//  cin >> r2 >> c2;
 
//  if (c1!=r2)
//  {
//  cout<<“Cant be Multiplied”; 
//  return 0; 
// }
 
//  // Storing elements of first matrix.
//  cout << endl << "Enter elements of matrix 1:" << endl;
//  for(i = 0; i < r1; ++i)
//  for(j = 0; j < c1; ++j)
//  {
//  cout << "Enter element a" << i + 1 << j + 1 << " : ";
//  cin >> a[i][j];
//  }
 
//  // Storing elements of second matrix.
//  cout << endl << "Enter elements of matrix 2:" << endl;
//  for(i = 0; i < r2; ++i)
//  for(j = 0; j < c2; ++j)
//  {
//  cout << "Enter element b" << i + 1 << j + 1 << " : ";
//  cin >> b[i][j];
//  }
 
 
//  // Multiplying matrix a and b and storing in array mult.
//  for(i = 0; i < r1; ++i)
//  for(j = 0; j < c2; ++j) 
//  { 
//  mult[i][j]=0;
//  for(k = 0; k < c1; ++k)
//  {
//  mult[i][j] += a[i][k] * b[k][j];
//  } 
//  }
 
//  // Displaying the multiplication of two matrix.
//  cout << endl << "Output Matrix: " << endl;
//  for(i = 0; i < r1; ++i)
//  for(j = 0; j < c2; ++j)
//  {
//  cout << " " << mult[i][j];
//  if(j == c2-1)
//  cout << endl;
//  }
 
//  return 0;
// }