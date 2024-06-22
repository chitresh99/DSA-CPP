// Link :- https://www.naukri.com/code360/problems/ninja-and-the-sorted-check_6581957?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTabValue=SUBMISSION


#include <iostream>
#include <vector>
using namespace std;

int isSorted(int n, vector<int> a) {
    for(int i = 0; i < n ; i++){
        if(a [i] >= a [i - 1]){

        }
        else{
            return false;
        }
    }
    return true;
}


