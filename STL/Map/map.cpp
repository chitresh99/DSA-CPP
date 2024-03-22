#include <iostream>
#include <map>
using namespace std;

// in map all of the
// gets stored in key value
// like chitresh has a key value of raftaar
// only one key will point to one value

// the complexity of this map is o of log n

int main()
{
    map<int, string> m; // since we have a key and a value pair we have int and string

    m[1] = "chitresh";
    m[2] = "raftaar";
    m[3] = "krsna";

    m.insert({5, "bheem"}); //inserting in map

    cout << "before erase" << endl;
    for (auto i : m) // maps are sorted
    {
        cout << i.first << endl;
    }

    cout << "finding 3 -> " << m.count(3) << endl; //finding in map

    m.erase(3);
    cout << "after erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << endl;
    }
    
    cout<<"there is the element -> "<<endl;
    auto it = m.find(5);

    for(auto i = it; i!=m.end();i++){
        cout<<(*i).first<<endl;
    }

}