#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("chitresh");
    q.push("raftaar");
    q.push("krsna");

    cout << "first element -> " << q.front() << endl; //checking the first element
    cout << "last element -> " << q.back() << endl; //checking the last element

    q.pop(); //popping the front element

    cout << "front element -> " << q.front() << endl; //checking the front element after popping 4

    cout<< "size after pop -> "<<q.size()<<endl;//checking the size
}