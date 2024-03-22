#include <iostream>
using namespace std;

int findunique(int *arr, int size)
{

    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}


int main(){
    
    int size = 6;
    int arr[6] = {1,2,2,1,1,3};

    int unique = findunique(arr,size);
     
    cout << " The unique element is "<<unique<<endl;

    return 0;

}

// Question explanation :- The thing is the numbers in this array should be unique meaning 
// like let's say 2 is occuring twice and three is also occuring twice then it not unique
// but if three is occuring once two is occuring twice or one is occuring once then the condition is
// satisfied and then we can return true 