#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int key) {

    int start = 0;
    int end = size -1;
    
    int mid = (start-end/2);

    while (start <= key) {

        if (arr[mid] == key) {
            return mid;
        }

        if (key > arr[mid] ) {
            start = mid + 1;
        }

        else {
            end = mid - 1;
        }

        //mid = start + (end-start)/2;

    }
    return -1;

}

int main () {
    int boys [7] = {2,4,6,8,12,18};
    int girls [6] = {3,5,7,9,11,13};

    int boysindex = binarysearch(boys,7,6);
    cout << " Index of 7 is " << boysindex << endl;
    
    int girlsindex = binarysearch(girls,6,7);
    cout<<"Index of 6 is "<<girlsindex<<endl;

    return 0;
}
