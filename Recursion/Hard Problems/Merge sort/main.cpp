#include <iostream>
using namespace std;

void mergesort(int arr[],int s, int e){
    
    //base case
    if(s > e) {
       return; 
    }

    //sorting the left part
    mergesort(arr,s,mid);

    //sorting the right part
    mergesort(arr,mid+1,e);

    //merge
    merge(arr,s,e);
    

}

int main()
{
    int arr[5] = {23,42,33,21,22};
    int n = 5;

    mergesort(arr,0,n-1);
}