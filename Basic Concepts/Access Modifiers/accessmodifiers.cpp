#include <iostream> 
using namespace std;

class hero{
     
    //some properties for the class
    public:
    char name[100];
    int health;

    private:
    int level;
    int value;

    void print(){ //this can be accessed only from inside the class
        cout<<"Level"<<level<<endl;
    }
};


int main() {
    

    //creating objects from class

    hero raftaar;
    
    //checking the size of the object
    cout << "size : " <<sizeof(raftaar) <<endl; 
    cout << "Health is : " <<raftaar.health<<endl; 
}