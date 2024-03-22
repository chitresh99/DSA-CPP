#include <iostream>
using namespace std;

int main () {

// intializing an array
int second[3] = {5,6,7};

// accessing the element
cout<<"Everthing is fine at "<<second[0] <<endl;

// printing the array 

int third[15] = {5,6}; 
int n = 15; // the rest of the array will be zero other than the known values
cout << "printing the array" <<endl;
for(int i = 0 ; i < n; i++){
cout << third[i] << " "; 
}

//intializing all locations with zero
int fourth[10] = {0};
int n = 15;
cout << "printing the array" <<endl;
//print the array
for(int i = 0 ; i < n; i++){
cout << fourth[i] << " "; 
}

//trying to initialize all values of arrays with 1 (not  possible)
int fifth[10] = {1};
int n = 10;
cout << "printing the array" <<endl;
//print the array
for(int i = 0 ; i < n; i++){
cout << fifth[i] << " "; 
}

}