#include <iostream>
#include <vector>
using namespace std;

int intersection(int arr[],int brr[], int n , int m)
{   
    vector<int> vis(m, 0);
    // int count = 0; // To count the number of intersecting elements

    for(int i = 0 ; i < n ; i++){
        for (int j = 0 ; i < m ; j++){
            if(arr[i] == brr[j] && vis[j] == 0){
                int ans = arr[i];
                 vis[j] = 1; //mark as visited
                //  count++; //increment the count
                 break;  // Move to the next element in arr
            }

            if(brr[j] > arr[i]){
                break;
            }
        }
    }
    // return ans;
}

int main()
{

    int arr[8] = {1, 2, 2, 3, 3, 4, 5, 6};
    int n = 8;

    int brr[7] = {2, 3, 3, 5, 6, 6, 7};
    int m = 7;

    
}