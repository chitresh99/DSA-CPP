#include <bits/stdc++.h> 
using namespace std;

class Queue {
     int *arr;
     int qfront;
     int rear;
     int size;

public:
    Queue() {
        size = 10000;
        arr = new int [size];
        qfront = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
       if(qfront==rear){
          return true;
       }
       else{
           return false;
       }
    }

    void enqueue(int data) {
        if(rear==size){
            // cout<<"queue is full"<<endl;
        }else{
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if(qfront == rear){
            return -1;//queue is empty here
        }
        else{
            int ans = arr[qfront];//storung our answer
            arr[qfront]=-1;
            qfront++;
            if(qfront==rear){//if the whole queue goes empty
                qfront = 0;
                rear = 0;
        }
        return ans;
        }
    }

    int front() {
       if(qfront == rear){
           return -1;
       }
       else{
           return arr[qfront];
       }
    }
};

//link :- https://www.naukri.com/code360/problems/queue-using-array-or-singly-linked-list_2099908?leftPanelTab=0%3Fsource%3Dyoutube&campaign=LoveBabbar_Codestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudio&leftPanelTabValue=SUBMISSION