#include <iostream>
using namespace std;

int findGreatest(int arr[], int size) {
    int greatest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > greatest) {
            greatest = arr[i];
        }
    }
    return greatest;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    int greatest = findGreatest(arr, size);
    cout << "The greatest element in the array is " << greatest << endl;
    return 0;
}
