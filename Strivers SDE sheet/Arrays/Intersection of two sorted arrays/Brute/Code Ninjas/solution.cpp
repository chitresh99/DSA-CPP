#include <iostream> 
#include <vector>
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i = 0,j = 0;
	vector<int> ans;
	while(i<n && j < m){
        //if the element in the second array is greater than the element in the first array
        // then there can't be a match so we move forward

        /*
         index [1]
         arr1 = 1 , 2 , 3 , 4 
         arr2 = 2, 4 , 6 , 8 
         Here element in the second array at index 1 is greater so there won't be a match moving forward so we do i++ and then 
         comapare the current i element and the element the pointer j is at 
        */

		if(arr1[i] < arr2[j]){
          i++;
        }else if(arr1[i] >  arr2[j]){  //if the element in the first array is greater than the element in the second array
        // then there can't be a match so we move forward
        j++;
        }
        else{
            // if the element are same
            ans.push_back(arr1[i]); // we can take element from any array and put it in the final array since they are the same
            i++;
            j++;
        }

	}

	return ans;
}

// link :- https://www.naukri.com/code360/problems/intersection-of-2-arrays_1082149?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems