#include <iostream>
using namespace std;

int power(int n)
{

    if (n == 0)
    {
        return 1;
    }
    else
    {
        int small =power(n - 1);
        int big = 2 * small;
        return big;
    }
}

int main()
{
    int n;
    cout <<"Enter the power"<<endl;
    cin >> n;

    int answer = power(n);
    cout << "Power of 2 raised is "<<answer <<endl;
    return 0;
}