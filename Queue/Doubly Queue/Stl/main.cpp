#include <iostream>
#include <queue>
using namespace std;

int main() {
    deque <int> d;

    d.push_front(12);//at the zeroth index
    d.push_back(13);//at the first index

    cout<<"The front element "<<d.front()<<endl;
    cout<<"The back element "<<d.back()<<endl;
    
    d.pop_front();
    d.pop_back();

    // cout<<"the front element is "<<d.back()<<endl;
    
    if(d.empty()){
        cout<<"queue is empty"<<endl;
    }else{
        cout<<"queue is full"<<endl;
    }
}