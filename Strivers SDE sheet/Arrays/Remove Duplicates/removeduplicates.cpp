// two pointer approach

#include <iostream>
using namespace std;

int duplicates(int arr[], int size)
{
    int i = 0; // first pointer
    for (int j = 1; j < size; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++; // moving forward in the array
        }
    }
    return i + 1;
}

int main()
{
    int arr[6] = {1, 1, 2, 2, 3, 3};
    int size = 6;

    int ans = duplicates(arr, 6);
    
    //to print the whole array
    for(int i = 0;i < ans ; i++){
        cout<<arr[i];
    }
    cout<<endl;
}
