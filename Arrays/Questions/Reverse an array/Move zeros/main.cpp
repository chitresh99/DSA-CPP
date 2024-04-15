#include <iostream> 
#include <vector> 
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0; //this is our intial then we increment this

        for(int j = 0;j <nums.size();j++){
            if(nums[j] != 0){
                swap(nums[j],nums[i]);
                    i++;//moving i forward 
            }
        }
    }
};

/*Explanation :- so i is the first intial number and j is the number next to it if the number next to it 
that's [j] is equal to zero we ignore and if the number j is not equal to zero we move it forward that's we swap i and j and we move i forward*/
