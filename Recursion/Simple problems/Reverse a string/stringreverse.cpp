#include <iostream>
using namespace std;

void reverse (string &str,int i,int j) {
   
    cout <<"call recieved for "<<str<<endl;

    //base case
    if(i>j){  //referring to index of i and j
         return;
    }
    
    swap(str[i],str[j]);
    i++; //incrementing the pointer
    j--; //decrementing the pointer

    //recursive call

    reverse(str,i,j);
}



int main() {

    string name = "chitresh";
    
    cout<<endl;
    reverse(name,0,name.length()-1);
    cout<<endl;
    cout<<name<<endl;

    return 0;
}