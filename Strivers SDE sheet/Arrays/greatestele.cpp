#include <iostream>
#include <vector>
using namespace std;

int largestElement(vector<int> &arr, int n) {
    int largestel = arr[0];

    for(int i = 0; i < n ;i++){
        if(arr[i] > largestel){
           largestel = arr[i] ;
        }
    }
    return largestel ;
}

// link :- https://www.geeksforgeeks.org/vector-in-cpp-stl/