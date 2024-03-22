#include <iostream>
using namespace std;

int binarysearch (int arr[],int size, int key) {
    
    int start = 0;
    int end = size - 1;

    int mid = (start + end / 2);

    while (start <= mid) {
         
         if (arr[mid ] == key) {
            return mid;
         }

         if (key > arr[mid]) {
            start = mid + 1;
         }

         else {
            end = mid - 1;
         }

         mid = start + (end-start)/2;
    }

    return -1;
}

int main () {
int even [5] = {2,4,6,8,10};

int evenindex = binarysearch (even,5,4);
cout<<"Index of 4 is "<<evenindex<<endl;

return 0;

}