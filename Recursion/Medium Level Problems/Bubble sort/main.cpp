#include <iostream>
using namespace std;

void sortarray(int arr[], int size)
{   
    //base case -> if only one element exits the array is already sorted
    if(size == 0 || size == 1){
        return ;
    }
    

    //1 case is solved -> This will keep the largest element at the end
    for(int i = 0; i<size-1;i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    sortarray(arr,size-1); //size-1 because we already solved one case above so -1 in all together it's size-1
}

int main()
{

    int arr[5] = {2, 3, 6, 8, 7};
    int size = 5;

    sortarray(arr, 5);

    for(int i = 0; i < 5;i++){
        cout <<arr[i]<<" ";
    }
    return 0;
}