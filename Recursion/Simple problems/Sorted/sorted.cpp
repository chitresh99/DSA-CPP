#include <iostream>
using namespace std;

// [] This is also a pointer and *arr is also a pointer



bool issorted(int arr[], int size){
     
     //base case 
     if(size == 0 || size == 1){
        return true;
     }
        

    if(arr[0] > arr [1]){
        return false; //because our array is not sorted
    }

    else{
        bool remaining = issorted(arr+1,size-1 );
        return remaining;
    }

}

int main () {
    int arr[5] = {2,6,9,8,7};
    int size = 5;

    bool ans = issorted(arr,size);
    
    if(ans){
        cout << "array is sorted"<<endl;
    }
    else{
        cout<<"array is not sorted"<<endl;
    }
    return 0;

}