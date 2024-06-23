// link :- https://www.naukri.com/code360/problems/left-rotate-an-array-by-one_5026278?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTabValue=SUBMISSION

#include <iostream>
#include <vector>
using namespace std;

vector<int> rotateArray(vector<int>& arr, int n) {
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i]; // arr[i] starting from the first index in i - 1 we store it

    }
    arr[n-1] = temp; //storing the temporary which was the first element in the last index which is n - 1
    return arr;
}
