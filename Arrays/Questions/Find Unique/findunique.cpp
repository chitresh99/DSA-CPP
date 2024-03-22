#include <iostream>
using namespace std;

int findunique(int *arr, int size)
{

    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int size = 7;
    int arr[7] = {2, 3, 1, 6, 3, 6, 2};

    int uniqueElement = findunique(arr, size); // calling the function "we made a mistake here intially we did call the function but we didn't"
                                               // store it

    cout << "The unique element is " << uniqueElement << endl;

    return 0;
}

/*Question link :- https://www.codingninjas.com/studio/problems/find-unique_625159?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTabValue=PROBLEM*/