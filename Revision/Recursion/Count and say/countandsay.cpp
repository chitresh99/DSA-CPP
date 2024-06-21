#include <iostream>
#include <sstream>
using namespace std;

string countandsay(int num) // Changed parameter name from n to num
{   

    //Base Case 
    if (num == 1)
    {
        return "1";
    }

    //Recursive Step
    string prev = countandsay(num - 1);
    stringstream result;
    
    // Run length encoding
    int length = prev.length(); 
    for (int i = 0; i < length; ++i) 
    {
        int count = 1;
        while (i + 1 < length && prev[i] == prev[i + 1])
        {
            ++count;
            ++i;
        }
        result << count << prev[i];
    }

    // Return the generated nth element
    return result.str();
}

int main()
{
    int n = 4; // Example: Generating the 4th element of the sequence
    cout << "The " << n << "th element of the count-and-say sequence is: " << countandsay(n) << std::endl; // Fixed function call
    return 0;
}
