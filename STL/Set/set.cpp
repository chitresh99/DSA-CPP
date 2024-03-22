#include <iostream>
#include <set>
using namespace std;

// set has only unique elements
// let's say we put 5 times 5 then we would only get 5 one time
// set stores every element only one time
// there are two types of set ordered and unordered

// set is generally slow tham ordered set
// unordered set is random like when we try to fetch the elements it will be random


//all these methods have complexity of o(logn)

int main()
{
    set<int> s;
    
    s.insert(6);
    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(2);

    // we will get everything in a sorted order
    for (auto i : s)
    {
        cout << i << endl;
    }

    // deletes the begining element

    cout << "element's right now -> " << endl;

    set<int>::iterator it = s.begin(); // i simply don't understand how this works
    it++;                              // but it does delete second element from the list

    s.erase(it);

    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << endl;
    cout << "5 is present or not - >" << s.count(5) << endl;

    set<int>::iterator itr = s.find(5);

    for (auto it = itr; it != s.end(); it++)
    {
        cout<<*it<<" ";
    }cout<<endl;
}