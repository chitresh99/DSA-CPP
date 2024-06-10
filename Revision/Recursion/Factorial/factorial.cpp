#include <iostream>
using namespace std;

int recursion(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        int smallprob = recursion(n - 1);
        int bigproblem = n * smallprob;
        return bigproblem;
    }
}

int main()
{

    int n;

    cin >> n;

    int ans = recursion(n);

    cout << ans << endl;

    return 0;
}

//things i missed :- calling the function inside the function