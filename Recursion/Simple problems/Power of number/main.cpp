#include <iostream>
using namespace std;

int power(int a , int b){
    if (b == 0) // b is power
       return 1;
    
    if (b == 1)
        return a;


    //recursive call
    int ans = power(a,b/2);
    

    // if b is even
    if(b % 2 == 0){
      return ans * ans; // this is basically saying power(a,b/2) * power(a,b/2) 
    } 
    else{// if b is add
        return a * ans * ans;
    }
    
}
 
int main () {
    int a,b;
    cin >> a >> b;

    int ans = power(a,b);
    cout << ans <<endl;
    return 0;
}