// https://leetcode.com/problems/count-and-say/

#include <iostream>
#include <sstream>
using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        if (n == 1)
    {
        return "1";
    }

    string prev = countAndSay(n - 1);
    stringstream result;

    int length = prev.length(); 
    for (int i = 0; i < length; ++i) 
    {
        int count = 1;
        while (i + 1 < length && prev[i] == prev[i + 1])
        {
            ++count;
            ++i;
        }
        result << count << prev[i];
    }
    return result.str();
    }
};