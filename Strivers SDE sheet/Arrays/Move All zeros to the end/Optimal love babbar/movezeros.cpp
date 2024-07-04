#include <iostream>
using namespace std;


int movezeros(int arr[],int size){
    
    int i = 0;
    for(int j = 0 ; j < size ; j++){
        if(arr[j] != 0){
           swap(arr[j],arr[i]);
           i++;
        }

    }
    return i;
}

int main() {

    int arr[5] = {1,0,2,0,3};
    int size = 5;
    
    int ans = movezeros(arr,5);
    for(int i = 0;i < size ; i++){
        cout<<arr[i]<<" ";
    }
    cout <<endl;
     
}