//52 quiz 1,2 - display day  and moth name using if else ladder 
#include<iostream>
using namespace std;
int main(){
    int day , month;
    cout<<"enter day number :: ";
    cin>>day;
    cout<<"Enter month number :: ";
    cin>>month;
    cout<<"day :: ";
    if(day==1){
        cout<<"Monday";
    }
    else if(day==2){
        cout<<"tuesday";
    }
     else if(day==3){
        cout<<"Wedday";
    }
     else if(day==4){
        cout<<"Thursday";
    }
     else if(day==5){
        cout<<"Friday";
    }
     else if(day==6){
        cout<<"Saturday";
    }
     else if(day==7){
        cout<<"Sunday";
    }
     else{
        cout<<"Wrong input";
    }
//month
cout<<endl;
cout<<"month :: ";
    if(month==1){
        cout<<"january";

    }
    else if(month==2){
        cout<<"February";
    }
      else if(month==3){
        cout<<"March";
    }
      else if(month==4){
        cout<<"April";
    }
      else if(month==5){
        cout<<"May";
    }
      else if(month==6){
        cout<<"June";
    }
      else if(month==7){
        cout<<"July";
    }
      else if(month==8){
        cout<<"August";
    }
      else if(month==9){
        cout<<"September";
    }
      else if(month==10){
        cout<<"October";
    }
      else if(month==11){
        cout<<"November";
    }
      else if(month==12){
        cout<<"December";
    }
    else{
        cout<<"Wrong input";
    }
    
}

















