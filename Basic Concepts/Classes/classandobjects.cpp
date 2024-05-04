#include <iostream>
#include "hero.cpp"; //calling the class from a different file
using namespace std;

//creating a class
// class hero{
     
//     //some properties for the class
//     // char name[100];
//     // int health;
//     // int level;

//     //int value;
// };


int main() {
    

    //creating objects from class

    hero raftaar;
    
    //checking the size of the object
    cout << "size : " <<sizeof(raftaar) <<endl; 
    cout << "Health is : " <<raftaar.health<<endl; 
}