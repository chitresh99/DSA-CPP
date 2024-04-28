#include <iostream>
using namespace std;

void print(int arr[], int s, int e) {

    for(int i=s; i<=e; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

bool binarysearch(int arr[], int s, int e, int key)
{
    print(arr,s,e);
    // base case

    //element not found
    if (s > e)
        return false;

    int mid = s + (e - s) / 2;
    
    //element found in the mid
    if(arr[mid]==key)
        return true;
    

    if(arr[mid] < key){
       return binarysearch(arr,mid+1,e,key);
    }
    else{
        return binarysearch(arr,s,mid-1,key);
    }
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int key = 4;

    cout<<"present or not "<<binarysearch(arr,0,5,key)<<endl;


    return 0;
}