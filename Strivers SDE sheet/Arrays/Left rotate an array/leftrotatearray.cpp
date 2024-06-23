#include <iostream>
using namespace std;

int leftrotate(int arr[], int size)
{
    int temp = arr[0];
    for (int i = 1; i < size; i++)
    {
        arr[i - 1] = arr[i]; // arr[i] starting from the first index in i - 1 we store it

    }
    arr[size-1] = temp; //storing the temporary which was the first element in the last index which is n - 1
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    int ans = leftrotate(arr,5);
    for(int i = 0; i < size ;i++){
        cout <<arr[i]<<endl;
    }

    return 0;
}