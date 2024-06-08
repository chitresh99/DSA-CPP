// // https://leetcode.com/problems/subsets/

// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// private:
//     void solve(vector<int>& nums, vector<int>& output, int index, vector<vector<int>>& ans) {
//         // Base case
//         if (index >= nums.size()) {
//             ans.push_back(output); //storing the output
//             return;
//         }

//         // Exclude
//         solve(nums, output, index + 1, ans); //pushing i one step ahead

//         // Include
//         int element = nums[index];
//         output.push_back(element);
//         solve(nums, output, index + 1, ans);
        
//         // Backtrack to remove the element added in include step
//         output.pop_back();
//     }

// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>> ans; // Vector to store all the answers
//         vector<int> output;
//         int index = 0;
//         solve(nums, output, index, ans);
//         return ans;
//     }
// };
