#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int>d;

    d.push_front(1);//pushing the element in the front
    d.push_back(2);;//pushing the element in the back
    for(int i:d){
        cout<<i<<" "<<endl;
    }
   
    cout<<endl;

    for(int i:d){
        cout<<i<<" "<<endl;
    }

    cout<<"print first index element "<<d.at(1)<<endl;

    cout<<"empty or not "<<d.empty()<<endl; // 0 is false
}