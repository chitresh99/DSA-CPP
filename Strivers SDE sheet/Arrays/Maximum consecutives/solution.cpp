#include <iostream>
#include <algorithm>
using namespace std;

int findconsecutives(int arr[], int size)
{
    int maxi = 0; // maximum
    int cnt = 0;  // counter

    for (int i = 0; i < size; i++)
    {
         //arr[i] refers to the element at index i
        if (arr[i] == 1) //if array of element
        {
            cnt++; //incrementing the counter
            maxi = max(maxi, cnt); //passing the maximum and the counters
            //here we compare two number inside max right the last maximum and the current consecutive counted
        }
        else
        {
            cnt = 0; // if the conecutivness breakes right we set it to zero right
        }
    }
    return maxi;
}

int main()
{

    int arr[6] = {1, 1, 0, 1, 1, 1};
    int size = 6;

    int ans = findconsecutives(arr, 6);
    cout << ans << endl;
}