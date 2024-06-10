//link :- https://leetcode.com/problems/climbing-stairs/ 

class Solution {
public:
    int climbStairs(int n) {

        //base cases 
        if (n == 1) {
            return 1;
        }
        if (n == 2) {
            return 2;
        }

        //initializing steps to 1 and 2
        int first = 1;
        int second = 2;
        
        int result = 0;

        //starting from the second index as our bases cases are taken care of
        for (int i = 2; i < n; i++) {
            
            result = first + second;
            first = second;
            second = result;
        }
        return result;
    }
};


//Here in the second iteration at the 4th index we would have 5 ways to reach the 4th stair in the stair case and this would go on till we reach the nth stair
