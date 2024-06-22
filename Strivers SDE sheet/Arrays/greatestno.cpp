#include <iostream>
using namespace std;

int largest(int arr[],int size){
    
    int largestel = arr[0];

    for(int i = 0; i < size ;i++){
        if(arr[i] > arr[largestel]){
           largestel = arr[i] ;
        }
    }
    return largestel ;
}

int main () {

    int arr [5] = {3,2,2,1,5};
    int size = 5;

    int large = largest(arr,5);
    cout << large <<endl;
    return 0;

}