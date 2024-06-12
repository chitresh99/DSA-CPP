#include <iostream>
#include <sstream>
using namespace std;

int main (){
int num = 123;
stringstream ss;
ss << num; //the number had the value 123 now it is inserted into ss in the form of string it's much like cin and cout
string str = ss.str(); // str now contains "123"

cout <<str<<endl;
}
