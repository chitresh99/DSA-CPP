//Problem link :- https://www.naukri.com/code360/problems/rotate-array_1230543?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems

// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// void reverse (int arr[],int start,int end){
//     while(start<= end){
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }

// void leftrotate(int arr[],int n,int d){
//     reverse(arr,arr+d);
//     reverse(arr+d,arr+n);
//     reverse(arr,arr+n);
// }

// int main() {
//     int n;

//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n;i++){
//         cin >> arr[i];
//     }
//     int d;
//     cin >> d;
//     leftrotate(arr,n,d);
//     for(int i = 0; i < n ; i++){
//         cout <<arr[i] << " ";
//     }
//     return 0;
// }