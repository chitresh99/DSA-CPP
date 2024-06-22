//link :- https://www.naukri.com/code360/problems/remove-duplicates-from-sorted-array_1102307?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTabValue=SUBMISSION

#include <iostream>
#include <vector>
using namespace std;


int removeDuplicates(vector<int> &arr, int n) {
	int i = 0; // first pointer
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++; // moving forward in the array
        }
    }
    return i + 1;
}