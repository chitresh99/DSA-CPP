#include <bits/stdc++.h> 
class Deque
{
    int *arr;
    int front;
    int rear;
    int size;
public:
    // Initialize your data structure.
    Deque(int n)
    {
        size = n;
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        if(isFull()){ // to check if the queue is full and also calling the isFull function from below
           return false;
        }
        else if(isEmpty()){ // to push a single element 
           front=rear=0;
        } else if (front == 0 &&  rear != size - 1) { // to maintain cyclic nature i mean since the front moves back in a doubly queue so 
        // if it's at zeroth index indicating the queue is getting full from back so so start putting the elements to the n - 1 index
           front = size - 1;
        } else{
            front-- ; //normal flow
        }
        arr[front] = x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
         if(isFull()){ // to check if the queue is full
           return false;
        }
        else if(isEmpty()){ // to push a single element 
           front=rear=0;
        } else if (rear==size-1 && front != 0) { 
           rear = 0;
        } else{
            rear++ ; //normal flow
        }
        arr[rear] = x;
        return true;
       
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        if(isEmpty()){//to check if the queue is empty
        return - 1; 
        }
        int ans = arr[front];
        arr[front] = -1;
        if(front == rear){
            front = rear = -1;
        }
        else if(front == size - 1){
            front = 0;
        }
        else
        {
            front++;
        }
        return ans;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
       if(isEmpty()){//to check if the queue is empty
        return - 1; 
        }
        int ans = arr[rear];
        arr[rear] = -1;
        if(front == rear){ //single element is present and we want to pop that
            front = rear = -1;
        }
        else if(rear==0){
            rear = size - 1;
        }
        else
        {
            rear--;
        }
        return ans;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
       if(isEmpty()){
           return -1;
       }
       return arr[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        if(isEmpty()){
           return -1;
       }
       return arr[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        if(front == -1)
           return -1;
        else
            return false;
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        if((front==0 && rear == size - 1) || (front != 0 && rear == (front-1)%(size - 1))){
            return true;
        }
        else
        {
            return false;
        }
    }
};

//link :- https://www.naukri.com/code360/problems/deque_1170059?leftPanelTab=0%3Fsource%3Dyoutube&campaign=LoveBabbar_Codestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudio&leftPanelTabValue=SUBMISSION