#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_front(2); // pushing the element in the front
    d.push_back(1);
    ; // pushing the element in the back

    cout << endl;

    cout << "print first index element " << d.at(1) << endl;

    cout << "empty or not " << d.empty() << endl; // 0 is false

    cout << "before erase -> " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "after erase -> " << d.size() << endl; //this gives out the size
    for(int i:d){
        cout<<i<<endl;
    }
}