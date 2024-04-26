#include <iostream>
using namespace std;

int getsum(int arr[],int size){

    if(size == 0){ //if there is no element present
        return 0;
    }

    if(size == 1){ //if there is only one element present
        return arr[0]; //we return the zeroth index
    }

    int remaining = getsum(arr+1,size - 1);

    // When you add 1 to a pointer it moves the pointer to the next memory location. So, arr+1 points to the second element of the array arr.
    // size - 1 = This expression reduces the size of the array by 1. Since one element has been skipped (the first element), the size of the remaining array decreases by 1.

    int sum = arr[0]+remaining;
    return sum;
}


int main(){
    int arr[5] = {1,2,3,4,5}; 
    int size = 5;

    int sum = getsum(arr,size);
    
    cout << " sum is " << sum << endl;

    return 0;
}