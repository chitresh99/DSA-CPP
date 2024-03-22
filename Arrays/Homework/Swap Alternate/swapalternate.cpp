#include <iostream>
using namespace std;

void printarray(int arr[],int n){
    
    for(int i = 0; i < n ; i++){
    cout << arr[i] << "";
    }cout <<endl;


}

void swapalternate (int arr[],int size){

    for (int i = 0; i < size ; i+=2 ){
       if(i+1 < size){
        swap(arr[i],arr[i+1]);
       }
    }

}

int main(){

    int even[8] = {5,4,3,6,7,8,9,1};
    int odd[5] = {4,3,9,8,6};

    
    swapalternate(even,8);
    printarray(even,8);
    cout<<endl;

    swapalternate(odd,5);
    printarray(odd,5);
    cout<<endl;
    return 0;
}

// Explanation :- With a step of 2, the function swaps pairs of elements in the array. For example:

// In the first iteration of the loop (i = 0), it swaps elements at indices 0 and 1.
// In the second iteration (i = 2), it swaps elements at indices 2 and 3.
// And so on, until it reaches the end of the array or runs out of elements to swap.