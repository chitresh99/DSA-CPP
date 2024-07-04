#include <iostream>
#include <vector>
using namespace std;
vector < int > sortedArray(vector < int > a, vector < int > b) {
    int n1 = a.size();
    int n2 = b.size();

    int i = 0;
    int j = 0;

    vector<int> unionArr; //creating a union array 
    //while i is less than n1 and j is less than n2 we iterate,so it doesn't go out of bounds
    while(i < n1 && j < n2){
      
      //if the first element in the first array than the first element in the second array we will take it
      // but we need to compare it so it's unique and not repeated
      if(a[i] <= b[j]){
          //comapring inside the first array only 
          //if the last element (back) is not equivalent to the current element we will take it
          //unionArr.size() -> this means it's the first time 
          if(unionArr.size() == 0 || unionArr.back() != a[i]){
              unionArr.push_back(a[i]);
          }
          i++; //irrespective of we take it or not we move
      }else{
           if(unionArr.size() == 0 || unionArr.back() != b[j]){
              unionArr.push_back(b[j]);
          }
          j++;
      }
    }

    while (j < n2){ //if elements are still left in j i.e the first array got exhausted
        if(unionArr.size() == 0 || unionArr.back() != b[j]){
              unionArr.push_back(b[j]);
          }
          j++;
    }
    
    while(i < n1){ //if elements are still left in i i.e the second array got exhausted
        if(unionArr.size() == 0 || unionArr.back() != a[i]){
              unionArr.push_back(a[i]);
          }
          i++; //irrespective of we take it or not we move
    }
    return unionArr; //returning the union array
    
}