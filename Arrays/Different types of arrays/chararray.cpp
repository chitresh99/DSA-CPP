#include <iostream>
using namespace std;

void printarray(int arr[],int size){
    cout<<"Printing the array"<<endl;
    //printing the array
    for(int i = 0; i < size; i++) {
        cout<< arr[i]<< " ";
    }
    cout<<"printing done"<<endl;
}

int main () {

// intializing an array
int second[3] = {5,6,7};

// accessing the element
cout<<"Everthing is fine at "<<second[0] <<endl;

// printing the array 

int third[15] = {5,6}; 
int n = 15;
printarray(third,15);


//intializing all locations with zero
int fourth[10] = {0};
n = 10;
printarray(fourth,10);

//trying to initialize all values of arrays with 1 (not  possible)
int fifth[10] = {1};
n = 10;
printarray(fifth,10);

int fifthSize = sizeof(fifth)/sizeof(int);
cout<<"Size of fifth is "<< fifthSize<<endl;
// either you could name n differently like n1,n2,n3
// or remove the int infront of it 

char ch[5] = {'a','b','c','d'};
for(int i = 0; i < 5 ;i++){
     cout<< ch[i]<< " ";
}

}