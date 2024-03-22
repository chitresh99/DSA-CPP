#include <iostream>
using namespace std;

int leftmost (int arr[],int n,int k) {
    int start = 0;
    int end = n - 1;
    int mid = start + (end -start/2);
    int ans = -1 ;

    while (start < end ) {
        
        if (arr[mid] == k) {
        ans = mid;
        end = mid - 1;
        }

        else if (k > arr[mid]) {
        start = mid + 1;
        }

        else if (k < arr[mid]) {
        end = mid - 1;
        }

        mid = start + (end -start/2);


    }
    
    return ans;

}

int rightmost (int arr[],int n,int k) {
    int start = 0;
    int end = n - 1;
    int mid = start + (end -start/2);
    int ans = -1 ;

    while (start < end ) {
        
        if (arr[mid] == k) {
        ans = mid;
        start = mid + 1;
        }

        else if (k > arr[mid]) {
        start = mid + 1;
        }

        else if (k < arr[mid]) {
        end = mid - 1;
        }

        mid = start + (end -start/2);


    }
    
    return ans;

}


int main () {
    
    int even[6] = {0,1,2,3,3,5};
    int odd[11] = {0,1,2,3,3,3,3,3,4,5,6};
    
    cout<<"The index of 3 is "<<leftmost(even,6,3)<<endl;
    cout<<"The index of 3 is "<<rightmost(odd,11,3)<<endl;
    
    return 0;
}