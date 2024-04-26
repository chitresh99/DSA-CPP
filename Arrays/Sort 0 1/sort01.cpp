#include <iostream>
using namespace std;

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortone(int arr[], int n)
//so basically what we decided what that we wanted all the 1's on the right and all the zeros on the left
//so if there is a zero already present on the left we move forward by doing ++
//and if there is one present in the right already what we do is --
//and incase there is one present in the left and 0 present in the right
//we do is swap
//take a look at the index we start swapping from the zeroth index from the left and the n - 1 index at the right
//we take the zeroth and the first index and the last and the index before the last one and start iterating and 
//moving forward and swapping

{
    int left = 0 ;
    int right = n - 1;

    while (left < right){ // till the array exits 
      
      while(arr[left] ==0  && left < right){
        left++;
      }

      while(arr[right] ==1  && left < right){
        right--;
      }
      
      if (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main()
{

    int arr[8] = {1, 0, 1, 0, 1, 0, 1, 0};

    sortone(arr, 8);
    printarray(arr, 8);
}