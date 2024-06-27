#include <iostream>
using namespace std;

int linearsearch(int arr[], int size,int num){



for(int i = 0; i < size ; i++){
    if(arr[i]==num){
        return i;
    }
}
return -1;
}

int main() {

    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int num;

    int ans = linearsearch(arr,5,3);
    cout <<ans<<endl;

}