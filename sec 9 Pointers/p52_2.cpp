//108 or 111 Demo pointer aritmetic
#include<iostream>
using namespace std;
int main(){
    int A[5]={2,4,6,8,10};
    int *p=A;
    for(int i=0;i<5;i++){
        cout<<p<<" , ";// 0x6ffef0 , 0x6ffef0 , 0x6ffef0 , 0x6ffef0 , 0x6ffef0 , 
    }

    cout<<"\n\n(p+i)-->";
     for(int i=0;i<5;i++){      
    cout<<p+i <<" , ";// 0x6ffef0 , 0x6ffef4 , 0x6ffef8 , 0x6ffefc , 0x6fff00 ,  
    }

    cout<<"\n\n*(p+i)-->";
     for(int i=0;i<5;i++){      
    // cout<<*p+ i <<" , ";//wrong //will add i in *p
   cout<<*(p+i)<<",";//2,4,6,8,10,  
}
 cout<<"\n\nA[i]--> ";  
     for(int i=0;i<5;i++){      
   cout<<A[i]<<",";//2,4,6,8,10,   
}
 cout<<"\n\ni[A]-->";  
     for(int i=0;i<5;i++){      
   cout<<i[A]<<",";//2,4,6,8,10,   
}
 cout<<"\n\np[i]-->";  
     for(int i=0;i<5;i++){      
   cout<<p[i]<<",";//2,4,6,8,10,   
}
 cout<<"\n\ni[p] --> ";  
     for(int i=0;i<5;i++){      
   cout<<i[A]<<",";//2,4,6,8,10,   
}
//  cout<<"\n\n"; 
//  cout<<p<<endl; 
//      for(int i=0;i<5;i++){      
//    cout<<*p<<",";//2,4,6,8,10,   
//    p++;
// }
// cout<<"\n"<<p<<endl;
// // cout<<*p;

int *q=&A[3];
cout<<"\n\np-q :: "<<p-q;
}