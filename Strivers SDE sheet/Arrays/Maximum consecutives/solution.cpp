#include <iostream>
#include <algorithm>
using namespace std;

int findconsecutives(int arr[] , int size){
int maxi = 0; //maximum
int cnt = 0; //counter

for(int i = 0; i < size ; i++){
    if(i == 1){
        cnt++;
        maxi = max(maxi,cnt);

    }
}
}

int main () {

    int arr[6] = {1,1,0,1,1,1};
    int size = 6;

    int ans = findconsecutives(arr,6);
}