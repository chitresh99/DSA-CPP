#include <iostream>
#include <stack>
using namespace std;


int main(){
    stack <int> s;
     
    //push operation
    s.push(5);
    s.push(2);//this will be out because last in first out

    //pop operation 
    s.pop();
    

    cout<<"printing top element -> "<<s.top()<<endl;

    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout <<"stack is not empty"<<endl;
    }
    
    cout << "size of stack "<<s.size()<<endl;
    return 0;
}
