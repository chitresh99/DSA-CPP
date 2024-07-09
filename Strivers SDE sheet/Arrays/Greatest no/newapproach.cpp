#include <iostream>
#include <algorithm>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_value = arr[0]; // Initialize max_value with the first element

    for (int i = 1; i < n; ++i) {
        max_value = std::max(max_value, arr[i]);
    }

    std::cout << "The maximum value in the array is " << max_value << std::endl;

    return 0;
}
