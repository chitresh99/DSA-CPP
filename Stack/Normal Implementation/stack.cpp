#include <iostream>
using namespace std;

class stack
{
    // properties
public:
    int *arr;
    int top;
    int size;

    // behaviour
    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    // size - top = 1 -> logic for checking whether the size is empty or not

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element; //inserting an element
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }

    void pop()
    {
        if(top >= 0){
            top--;
        }else{
            cout<<"stack underflow"<<endl;
        }
    }

    int peek() //int because we are returning stuff here
    {
        if(top >= 0)
        return arr[top];
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }

    bool isempty()
    {
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main()
{
    stack st(5); //declaring the size of the stack

    st.push(22);
    st.push(43);
    st.push(44);

    cout << st.peek()<<endl; //checking the top element of the stack via peek operation

    st.pop();
    
    cout << st.peek() <<endl;
    
    st.pop();

    cout << st.peek() <<endl;

     st.pop();

    cout << st.peek() <<endl;

    if(st.isempty()){
        cout<<"hi the stack is empty"<<endl;
    }
    else{
        cout<<"the stack isn't empty"<<endl;
    }
}
