#include <iostream>
#include <array>
using namespace std;

int main()
{

    int basic[3] = {1, 2, 3}; // simple array

    array<int, 4> a = {1, 2, 3, 4}; // this is also like a simple array
                                    // that's why we don't use this array main reason it being static

    int size = a.size(); // trying to find the size of the array
    for (int i = 0; i < size; i++)
    { // traversing an array the stl one
        cout << a[i] << endl;
    }

    cout << "Element at 2nd Index ->" << a.at(2) << endl; // acccessing the particular element at an index

    cout << "Element at 2nd Index ->" << a.empty() << endl; // returns a boolean

    cout << "First element ->" << a.front() << endl; // returns the first element of an stl array

    cout << "last element ->" << a.back() << endl; // returns the last element of a stl array
    return 0;
}
