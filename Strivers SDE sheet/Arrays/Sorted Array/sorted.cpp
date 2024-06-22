#include <iostream>
using namespace std;

bool issorted(int arr[],int size){
    for(int i = 1; i < size ; i++){ //keeping i = 1 so it wont trying to access 0-1 which is -1 which is out of bound
    if(arr[i] > arr[i - 1]){ //i -1 means going behind i so that makes i greater
    //its okay
    }
    else{
        return false;
    }
    
    }
   return true;
    
}

int main() {

    int arr[5] = {2,3,8,7,8};
    int size = 5;

    bool ans = issorted(arr,5);
    cout<<ans<<endl;
}