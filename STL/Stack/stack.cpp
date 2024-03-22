#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;

    s.push("chitresh"); // pushing elements on to the stack
    s.push("raftaar");
    s.push("krsna");

    cout << "top element -> " << s.top() << endl; // checking the top element

    s.pop(); // popping the top element

    cout << "top element - > " << s.top() << endl; // checking the top element now

    cout << "size of the stack " << s.size() << endl; // checking the size of the stack

    cout << "check if the stack is empty or not -> " << s.empty() << endl;

}