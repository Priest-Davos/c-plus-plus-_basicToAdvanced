// 95 or 98 Pattren 3
#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"enter the number of rows :: ";
    cin>>rows;
   

        for (int i = 0; i <rows; i++)    //mine logic
    {
        for (int j=rows-1; j >=0; j--)
       {
        if(i<j){
            cout<<"  ";// 1space or 2space
        }
      
        else{
            cout<<" *"; // 0 space or 1 space
        }
       }
        cout <<"\n";
    }
//     enter the number of rows :: 4 //for above mine logic
//        *
//      * *
//    * * *
//  * * * *


for(int i=0 ; i<rows; i++){         //his logic
    for(int j = 0;j<rows; j++){
        // if (i+j<rows-1)         //this  
        // {
        //     cout<<" ";
        // }
        // else{
        //     cout<<"*";
        // }                      
         if (i+j>=rows-1) //or this is his
        {
            cout<<"*";
        }
        else{
            cout<<" ";
        }
        //  if (i+j>rows-2) //or this
        // {
        //     cout<<"*";
        // }
        // else{
        //     cout<<" ";
        // }

        
    }
    cout<<"\n";
}





}

    //   new pattern made during testing
    //  for (int i = 0; i < rows; i++) 
    // {
    //     for (int j = 0; j < rows; j++)
    //    {
    //     if(i<j){
    //         cout<<" +";
    //     }
    //     else{
    //         cout<<" *";
    //     }
    //    }
    //     cout <<"\n";
    // }





//np 2
//  for (int i = rows; i >0; i--) 
//     {
//         for (int j = rows; j >0; j--)
//        {
//         if(i<j){
//             cout<<" ";
//         }
//         else{
//             cout<<" *";
//         }
//        }
//         cout <<"\n";
//     }
// enter the number of rows :: 5
//  * * * * *
//   * * * *
//    * * *
//     * *
//      *



 //np 3
//         for (int i = 0; i <rows; i++) 
//     {
//         for (int j=rows-1; j >=0; j--)
//        {
//         if(i<j){
//             cout<<" ";//2space
//         }
      
//         else{
//             cout<<" *"; //1 space
//         }
//        }
//         cout <<"\n";
//     }
//     enter the number of rows :: 5
//      *
//     * *
//    * * *
//   * * * *
//  * * * * *