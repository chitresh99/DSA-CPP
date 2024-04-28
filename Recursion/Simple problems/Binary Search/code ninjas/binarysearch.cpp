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