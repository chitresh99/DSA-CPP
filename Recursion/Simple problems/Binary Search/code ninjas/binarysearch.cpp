#include <iostream>
using namespace std;

int binarysearch(int arr[], int s, int e, int key)
{
   
    // base case

    //element not found
    if (s > e)
        return -1;

    int mid = s + (e - s) / 2;
    
    //element found in the mid
    if(arr[mid]==key)
        return mid;
    

    if(arr[mid] < key){
       return binarysearch(arr,mid+1,e,key);
    }
    else{
        return binarysearch(arr,s,mid-1,key);
    }
}

int search(int *input,int n,int val,int key)
{
   
   int ans = binarysearch(input,0,n-1,key);
 
}

//link :- https://www.naukri.com/code360/problems/binary-search_972?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_11