#include <iostream>
#include <vector>
using namespace std;

int main(){
    

    vector<int> v;// this is empty intially so the size is zero

    vector<int>a(5,1);//so here 5 is the size of the vector and all the elements will be initialized from one 
    //otherwise if we don't initialise from one the default condition will be zero   
    // cout<<"print a"<<endl;
    // for(int i:a){
    //     cout<<i<<" ";
    // }
    vector<int>last(a); //copying v into a
    cout<<"print a"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }


    cout<<"size->"<<v.capacity()<<endl;// checking the capacity

    v.push_back(1);//to push an element inside an array 
    cout<<"size->"<<v.capacity()<<endl;

    v.push_back(2);//to push an element inside an array 
    cout<<"size->"<<v.capacity()<<endl;

    v.push_back(3);//to push an element inside an array 
    cout<<"size->"<<v.capacity()<<endl;  //we got four in the terminal because this is a dynamic array and the size doubles
    

    cout<<"size ->"<<v.size()<<endl; //size is the no of elements

    cout<<"element at 2nd index->"<<v.at(2)<<endl;
   
    
    cout<<"front->"<<v.front()<<endl;
    cout<<"back->"<<v.back()<<endl;
    

    //code to print a vector array
    cout<<"before pop"<<endl; //printing the array before popping 
    for(int i:v){
        cout<<i<<"";
    }cout<<endl;

    v.pop_back(); //popping the last element of a array

     cout<<"after pop"<<endl; //printing the array after popping 
    for(int i:v){
        cout<<i<<"";
    }cout<<endl;
    
    //clearing the size of the array
    cout<<"before clear size -> "<<v.size()<<endl; //before clearning the size
    v.clear(); //clear operation
    cout<<"after clear size -> "<<v.size()<<endl;//after clearning the size 
    return 0;
}