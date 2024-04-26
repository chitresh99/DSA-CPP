#include <iostream>
using namespace std;

int power(int n){
    if(n==0) //base case
       return 1;
    // int smallprob = power(n-1);
    // int bigprob = 2 * smallprob;

    // return bigprob; 
    
    return 2 * power(n - 1);   //simple 
}


int main (){
    int n;
    cin >> n;
    
    int ans = power(n);
    cout << ans <<endl;
    return 0;
}