#include <iostream>
using namespace std;

int secondlargest(int arr[],int size) {

int largest = arr[0];
int secondlargestel = arr[0];

for(int i = 0 ; i < size ; i++){
    if(arr[i] > largest){
        largest = arr[i];
    }
   
}
//return largest;

for (int i = 0; i <size ; i++){
if(arr[i] > secondlargestel && arr[i] != largest){
    secondlargestel = arr[i];
}
}
return secondlargestel;
}

int main () {
    int arr [6] = {1,2,4,7,7,5}; 
    int size = 6;


    int ans = secondlargest(arr,6);
    cout <<ans<<endl;
}