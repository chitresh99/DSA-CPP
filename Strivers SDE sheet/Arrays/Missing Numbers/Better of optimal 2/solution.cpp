#include <iostream>
#include <vector>
using namespace std;

int missingnumbers(int arr[], int size)
{

    int xor1 = 0, xor2 = 0;
    for (int i = 0; i < size - 1; i++)
    {
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i + 1);
    }
    xor1 = xor1 ^ size;
    return xor1 ^ xor2;
}

int main()
{

    int arr[4] = {1, 2, 3, 5};
    int size = 4;
    
    int ans = missingnumbers(arr,4);
    vector<int> newArr;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < ans)
        {
            newArr.push_back(arr[i]);
        }
        else
        {
            newArr.push_back(ans);
            ans = -1;  // Mark the missing number as added
            newArr.push_back(arr[i]);
        }
    }
    if (ans != -1)
    {
        newArr.push_back(ans);
    }

    cout << "Array with the missing number: ";
    for (int i = 0; i < newArr.size(); i++)
    {
        cout << newArr[i] << " ";
    }
    cout << endl;

    return 0;
}
