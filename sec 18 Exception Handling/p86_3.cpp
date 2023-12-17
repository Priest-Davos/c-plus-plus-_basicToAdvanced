//208 or 228 Demo all about catch
#include<iostream>
using namespace std;
class MyException1{

};
class MyException2 : public MyException1{

};
int main(){
    try
    {
        // throw MyException1();
        // throw 4.0;
        throw "c";
        
    }
    catch(MyException2 e)
    {
       
    }
    catch(MyException1 e){
     cout<<"MyException1 xception"<<endl;
    }
    catch (double e){
      cout<<"Double catch";
    }
    catch(...){
        cout<<"All catch caught";
    }
    
}