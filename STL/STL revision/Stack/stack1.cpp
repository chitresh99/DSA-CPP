#include <iostream>
#include <stack>
using namespace std;

int main () {
    stack<int> numbers;

    numbers.push(1);
    numbers.push(2);
    numbers.push(3);
    
    cout << numbers.top();
    return 0;
}