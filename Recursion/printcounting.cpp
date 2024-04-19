#include <iostream>
using namespace std;

int print(int n){
    if (n==0)
       return 0;

    print(n - 1); //printing the number
    cout << n <<endl;
}

int main(){
    
    int n;
    cin >> n;

    cout << endl;
    print(n);

}