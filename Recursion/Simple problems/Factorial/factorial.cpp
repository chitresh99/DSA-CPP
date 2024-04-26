#include <iostream>
using namespace std;

int factorial(int n)
{
    // base case

    // if (n == 0)
    // {
    //     return 1; // writing return in base case is mandatory
    // }
    // else
    // {
    //      int smallint = factorial(n-1);
    //     //  int bigint = n * smallint; 

    //     //  return bigint;  

    //     //optimised approach

    //     return n * smallint;    
    // }

    if (n == 0)
    return 1;
    
    int smallint = factorial(n-1);
    int bigint = n * smallint; 

    return bigint;
    
}

int main()
{

    int n;

    cin >> n;

    int ans = factorial(n);

    cout << ans << endl;

    return 0;
}