#include <iostream> 
#include <vector>   
using namespace std;



int findDuplicate(vector<int> &arr) 
{
    // Initialize a variable to store the result
    int ans = 0;

    // Loop through the elements of the array and perform XOR operation
    // XOR (^) operation is used here to find the unique elements in the array
    for (int i = 0; i < arr.size(); i++) {
        ans = ans ^ arr[i];
    }

    // Loop through the numbers from 1 to (arr.size() - 1) and perform XOR operation
    // XOR operation is used here to find the unique numbers from 1 to n-1
    // n is the size of the array
    for (int i = 1; i < arr.size(); i++) {
        ans = ans ^ i;
    }

    // Return the result, which will be the XOR of all elements of the array
    // and the XOR of all numbers from 1 to n-1
    // The XOR of all elements of the array except the duplicate element will cancel out
    // leaving only the duplicate element in 'ans'
    return ans;
}
