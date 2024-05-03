#include <iostream>
using namespace std;

//revise this again

void merge(int arr[],int s,int e){

    
    int mid = (s+e)/2;

    //we have to create two arrays
    int len1 = mid - s + 1;
    int len2 = e - mid;

    //creating two arrays
    int *first = new int[len1];
    int *second = new int[len2];
    
    // int k starts from the starting

    //for first array
    int k = s;
    

    //copying values in array
    for(int i = 0; i < len1 ; i++){
     first[i] = arr[k++];
    }
    

    //for second array
    k = mid + 1; //mpving the pointer one ahead of 
    for(int i = 0; i < len2 ;i++){
        second[i]= arr[k++];
    }

    //merge 2 sorted arrays

    int index1 = 0;
    int index2 = 0;
    k = s; //index of main array

    while(index1 < len1 && index2 < len2){ // we are adding the while loop to keep everything inside arrays
          if(first[index1] < second[index2]){
            arr[k++] = first [index1++];//inserting the first element
          }
          else{
            arr[k++] = second[index2++]; 
          }
    }

    //checking for a different condition

    while(index1 < len1){
        arr[k++] = first [index1++];
    }

    while ( index2 < len2){
        arr[k++] = second[index2++];
    }

    delete []first;
    delete []second;
}

void mergesort(int arr[],int s, int e){
    
    //base case
    if(s >= e) { //if s and e are on the same element then you have to return
       return; 
    }

    int mid = (s+e)/2;

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

    for(int i = 0;i < n ; i++){
        cout << arr[i] << endl;
    }

}