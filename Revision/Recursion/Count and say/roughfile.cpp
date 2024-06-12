// class Solution {
// public:
//     string countAndSay(int num) {
//         if(num == 1)  return "1"; // Base case
//         string st = countAndSay(num-1); // Recursive call
//         stringstream ans; // Create a stringstream to build the result
//         int n = st.length();
//         for(int i = 0; i < n-1; i++){
//             int count = 1;
//             while(st[i]==st[i+1])   count++, i++; // Count the number of consecutive characters
//             ans << count << st[i]; // Append the count and character to the stringstream
//         }
//         if(n==1 || st[n-1] != st[n-2])    ans << "1" << st[n-1]; // Append "1" and the last character if it is different from the previous character
//         return ans.str(); // Convert the stringstream to a string and return it
//     }
// };

// https://leetcode.com/problems/count-and-say/solutions/3364534/c-easy-commented-code-100-fast/

// #include <iostream>
// using namespace std;


// string countAndSay(int n){

//     if(n==1){
//         return "1";
//     }
    


// }

// int main(){

// }