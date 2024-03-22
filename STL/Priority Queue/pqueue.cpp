#include <iostream>
#include <queue>
using namespace std;
// priority queue means whoes first element is always the greatest

// there are two thing max heap and min heap

// max heap means the element which we will fetch will always maximum
//  min heap means the element which we will fetch will always be minimum

int main()
{
    // way to make a max heap
    priority_queue<int> maxi;

    // way to make a mini heap

    priority_queue<int, vector<int>, greater<int>> mini; // mini here is the name

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout<<"size -> "<<maxi.size()<<endl;

    
    // fetching the maximum element
    int n = maxi.size();
    for (int i = 0; i < n; i++) //size changes everytime when we pop so we are now inserting all the elements in pop
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    //fetching the minimum element 

    mini.push(5);
    mini.push(4);
    mini.push(6);
    mini.push(2);
    cout<<"size -> "<<mini.size()<<endl;

    
    // fetching the minimum element
    int m = mini.size();
    for (int i = 0; i < m; i++) //size changes everytime when we pop so we are now inserting all the elements in pop
    {
        cout << mini.top() << " ";
        mini.pop();//popping everything
    }
    cout << endl;

    cout<<"is it empty -> "<<maxi.empty()<<endl;
}