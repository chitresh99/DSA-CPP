#include <iostream>
#include <vector>
using namespace std;

int consecutiveOnes(vector<int>& arr){
    int maxi = 0; // maximum
    int cnt = 0;  // counter

    for (int i = 0; i < arr.size(); i++)
    {
         //arr[i] refers to the element at index i
        if (arr[i] == 1) //if array of element
        {
            cnt++; //incrementing the counter
            maxi = max(maxi, cnt); //passing the maximum and the counters
            //here we compare two number inside max right the last maximum and the current consecutive counted
        }
        else
        {
            cnt = 0; // if the conecutivness breakes right we set it to zero right
        }
    }
    return maxi;
}

//link :- https://www.naukri.com/code360/problems/maximum-consecutive-ones_3843993?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems