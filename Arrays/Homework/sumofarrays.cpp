#include <iostream>
using namespace std;



int main() {
    
    int size;
    cout << "Enter the number of elements"<<endl;
    cin >> size;

    int num[100];
    cout << "Enter the elements of the array"<<endl;
    for(int i = 0; i < size ; i++){
    cin >> num[i];
    }

    int sum = 0; // Initialize sum to zero

    // Loop to calculate the sum of all elements in the array
    for(int i = 0; i < size; i++) {
        sum += num[i]; // Add each element to the sum
    }

    cout << "Sum of the elements: " << sum << endl;
    

}