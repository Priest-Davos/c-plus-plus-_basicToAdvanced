// 201 or 229 Student Exercise #13
// class for stack with xception 1.stack overflow 2)Stack Underflow
#include <iostream>
using namespace std;
class stackOverFlow : exception
{
};
class stackUnderFlow : exception
{
};

class stack
{
private:
    int *stk;
    int top = 0;
    int size;

public:
    stack(int size)
    {
        this->size = size;
        stk = new int[size];
    }
    void push(int x)
    {
        // if (top == size - 1)   //if top =-1
        if (top == size)
            throw stackOverFlow();
        else
        {

            stk[top++] = x;
        }
    }
    int pop()
    {
        if (top == 0)
        {
            throw stackUnderFlow();
        }
        // delete stk[top]; how to delete
        return stk[--top];
    }
    void del() { delete []stk; }
    int *getStack() { 
        cout<<"Adderess ::"<<stk<<endl;
        return  stk; }
    int getTop() { return top; }
};
int main()
{
    int size;
    cout << "Enter the size of the stack :: ";
    cin >> size;
    stack s(size);
    int *stk;
     cout<<"Adderess of pointer stk of main ::"<< stk<<endl;
    try
    {
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);
        // s.push(50);
        // s.push(60);
        //  s.push(8);

        cout << s.pop() << " is popped out" << endl;
        cout << s.pop() << " is popped out" << endl;

        int top = s.getTop();
        stk = s.getStack();
         cout<<"Adderess of main func stack ::"<< stk<<endl;
        cout << "Elements of stack are ::";
        for (int i = 0; i < top; i++)
        {
            cout << stk[i];
            if (i < top - 1)
                cout << ",";
        }
    }
    catch (stackOverFlow e)
    {
        cout << "stack overflow :: stack is full" << endl;
    }
    catch (stackUnderFlow e)
    {
        cout << "stackUnderFlow :: stack is empty" << endl;
    }
    s.del();
}
