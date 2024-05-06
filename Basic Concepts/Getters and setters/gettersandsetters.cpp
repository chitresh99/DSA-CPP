#include <iostream> 
using namespace std;

class hero{
     
    //some properties for the class
    
    char name[100];
    int health;

    public:
    int level;
    int value;

    void print(){ //this can be accessed only from inside the class
        cout<<"Level"<<level<<endl;
    }

    int gethealth() {
        return health;
    }

    void sethealth(int newhealth) {
         health = newhealth;
    }
};


int main() {
    

    //creating objects from class

    hero raftaar;
    
    //checking the size of the object
    cout << "size : " <<sizeof(raftaar) <<endl; 
 
    cout << "Health is " <<raftaar.gethealth() <<endl;

    // Accessing and printing level
    raftaar.level = 5;
    raftaar.print();

    return 0;
}