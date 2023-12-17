//154 or 174 Demo this pointer
#include <iostream>
using namespace std;
class Rectangle {
private :
int l,b;
public:
Rectangle (int l,int b){
    this->l=l;
    this->b=b;

}
int getLength(){
return l;
}

};

int main(){
    Rectangle r(3,3);
    cout<<"Length :: "<<r.getLength();


}