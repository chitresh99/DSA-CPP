#include <iostream>
using namespace std;

void print(int arr[],int n){
    cout << "size of array is "<<n<<endl;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<< " ";
    }cout<<endl;
}

bool search(int arr[], int size, int key)
{
    print(arr,size);
    // base case
    if (size == 0)
    { // if we reach the last element and the key element isn't found yet
        return false;
    }
    
    //first case
    if(arr[0]==key){//if the element on the zeroth index matches the key element
       return true;
    }

    else {
        int remaining = search(arr+1,size-1,key);
        return remaining;
    }



}

int main()
{

    int arr[4] = {1, 2, 3, 4};

    int size = 4;

    int key = 7; // passing the number which we want to find

    bool ans = search(arr, size, key);

    if(ans){
        cout<<"found element"<<endl;
    }
    else{
        cout<<"element not present"<<endl;
    }

    return 0;
}
