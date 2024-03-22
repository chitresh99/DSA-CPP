#include<bits/stdc++.h>
using namespace std;
 
    // Returns index of x if it is present in arr[],
    // else return -1
    int binarySearch(string arr[], string x,int n)
    {
        int l = 0 ;
        int r = n - 1;
        while (l <= r)
        {
            int m = l + (r - l) / 2;
 
        int res = -1000;   //some random value assigned because if res is already 0 then
                             //it will always return 0    
        if (x == (arr[m]))
            res = 0;
             
 
            // Check if x is present at mid
            if (res == 0)
                return m;
 
            // If x greater, ignore left half
            if (x > (arr[m]))
                l = m + 1;
 
            // If x is smaller, ignore right half
            else
                r = m - 1;
        }
 
        return -1;
    }
 
    // Driver code
    int main()
    {
        string arr[] = { "contribute", "geeks", "ide", "practice"};
        string x = "ide";
        int n = 4;
        int result = binarySearch(arr, x,n);
 
        if (result == -1)
            cout << ("Element not present");
        else
            cout << ("Element found at index ") << result;
    }