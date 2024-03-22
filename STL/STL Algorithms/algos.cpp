#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  // implementing a binary search
  vector<int> v;

  // putting element in a sorted way
  v.push_back(1);
  v.push_back(3);
  v.push_back(6);
  v.push_back(7);

  // checking if 5 is present or not
  cout << "Finding 6 -> " << binary_search(v.begin(), v.end(), 6)
       << endl; // this returns a boolean

  // finding the index
  cout << "lower bound -> " << lower_bound(v.begin(), v.end(), 6) - v.begin()
       << endl;
  cout << "lower bound -> " << upper_bound(v.begin(), v.end(), 6) - v.begin()
       << endl;

  int a = 3;
  int b = 4;
  cout << "max -> " << max(a, b) << endl; //printing the max value
  cout<<"min  ->  " << min(a,b)  << endl; //printing the min value

  swap(a,b);
  cout<<"a -> "<<a<<endl;

  string abcd = "abcd";
  reverse(abcd.begin(),abcd.end());

  rotate(v.begin(),v.begin()+1,v.end());
  cout<<"after rotate"<<endl;
  for(int i:v){
    cout<<i<<" ";
  }
}