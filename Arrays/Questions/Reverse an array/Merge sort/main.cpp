// merging two arrays 1 & 2 and making it a new array let's say array 3
// the order should be linear like the second element should be greater than first
#include <iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {                          // if arr[i] is less than arr[j]
            arr3[k++] = arr1[i++]; // then we will store arr1 in arr2
            //  k++; //then incrementing k
            //  i++; //moving i forward too
        }
        else
        {
            arr3[k++] = arr2[j++]; // this means arr2 has a smaller element
            // k++;
            // j++;
        }
    }

    while (i < n)
    { // copying the value
        arr3[k++] = arr1[i++];
        // k++;
        // i++;
    }

    // copy the remaning element
    while (j < m)
    {
        arr2[k++] = arr2[j++];
        //  k++;
        //  i++;
    }
}
void print(int ans[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    cout << endl;
}

int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};

    int arr3[8] = {0};

    merge(arr1, 5, arr2, 3, arr3); // array and their sizes
    print(arr3, 8);
    return 0;
}
