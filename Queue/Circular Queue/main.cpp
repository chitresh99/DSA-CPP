#include <bits/stdc++.h> 
class CircularQueue{
    int *arr;
    int front;
    int rear;
    int size;
    
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        size = n;
        arr = new int [size];
        front = rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){ // first we check if full
         if((front==0 && rear == size - 1) || (rear == (front - 1)% (size - 1)) ){ // i still don't understand what that modulus thing do
          // cout <<"queue is full"<<endl;
           return false;       
         }
         else if (front == -1){ // to push the first element
           front = rear = 0;
           
         }
         else if(rear == size - 1 && front != 0){ // rear is at the last element and front is not at zero
             rear = 0; //we start pushing from the first index like the zeroth index because front is not at zero indicating there is space there 
         }
         else{
             rear++; //normal case
               
         }
         arr[rear] = value;//storing the value, this line was there in every else so we took it out 
         return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){

         if(front == -1){
             //cout<<"queue is empty"<<endl;
             return -1;
         }
         int ans = arr[front]; //storing the answer
         arr[front]= -1;//we don't want that element to exist now 
         if(front == rear){//single element is present
         front = rear = -1;
         }
         else if(front == size - 1) {
          front = 0;// to maintain cyclic nature we push the element to 0th index if the index is at n - 1
         } 
         else{
             front++;
         }
         return ans;
    }
};

//link :- https://www.naukri.com/code360/problems/circular-queue_1170058?leftPanelTab=0%3Fsource%3Dyoutube&campaign=LoveBabbar_Codestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudio&leftPanelTabValue=SUBMISSION