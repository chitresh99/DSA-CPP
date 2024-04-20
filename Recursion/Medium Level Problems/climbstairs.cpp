#include <iostream>
using namespace std;
//the place where we are standing is identified by source

void reachedhome(int src,int dost){

    cout<<" source "<<src<<" destination "<<dost<<endl;
    if(src==dost){
        cout<<"reached"<<endl;
        return ;
    }

    src++;

    reachedhome(src,dost);
}


int main(){

   int dost = 10;
   int src = 1;

   cout <<endl;

   reachedhome(src,dost);

}