#include <iostream>
using namespace std;


void srcdest (int src,int dest){
//debugging statement 
cout << "source "<<src<<" destination "<<dest<<endl;

if (src == dest){
    cout <<"reached"<<endl;
    return ;
}

src++;

srcdest(src,dest);

}

int main () {

   int src,dest;

    cin >> src;
    cin >> dest;

    srcdest(src,dest);

    return 0;
}