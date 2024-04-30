#include <iostream>
using namespace std;

bool palindrome(string &str, int i, int j)
{
     //base case
     if(i>j)
        return true;

    if(str[i]!=str[j]){
       return false;
    }
    else{
       return palindrome(str,i+1,j-1);
    }
    //my approch is right let's go guys solved this on my own
}

int main()
{

    string name = "racecar";
    cout << endl;

    bool ans = palindrome(name,0,name.length()-1);

    if(ans){
        cout<<"It is a palindrome"<<endl;
    }
    else
    {
        cout<<"It's not a palindrome"<<endl;
    }
}