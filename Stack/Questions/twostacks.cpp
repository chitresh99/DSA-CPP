// two //stacks :- https://www.codingninjas.com/studio/problems/two-stacks_983634?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTube_CodestudioLovebabbar5thfeb&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_CodestudioLovebabbar5thfeb

// #include <bits/stdc++.h> 
// class TwoStack {
// int *arr;
// int top1;
// int top2;
// int size;


// public:

//     // Initialize TwoStack.
//     TwoStack(int s) {
//         this -> size = s;
//         top1 = -1;
//         top2 = s;
//         arr = new int[s];
//     }
    
//     // Push in stack 1.
//     void push1(int num) {
//         // atleast a empty space present 

//         if(top2 - top1 > 1){
//             top1++;
//             arr[top1] = num;
//         }
        
//     }

//     // Push in stack 2.
//     void push2(int num) {
//         if(top2 - top1 > 1){
//             top2--; // minus or decrement because we are moving backwards 
//             arr[top2] = num;
//         }
//     }

//     // Pop from stack 1 and return popped element.
//     int pop1() {
//         if(top1 >= 0){ //if the top1 is greater than 0 then we pop
//             int ans = arr[top1]; //storing the answer in top1 
//             top1--;  //decrementing the top 
//             return ans;
//         }
//         else{
//             return -1; //if we are popping and the stack is empty
//         }
        
//     }

//     // Pop from stack 2 and return popped element.
//     int pop2() {
//          if(top2 < size){ //if the top1 is greater than 0 then we pop
//             int ans = arr[top2]; //storing the answer in top1 
//             top2++;  //decrementing the top 
//             return ans;
//         }
//         else{
//             return -1; //if we are popping and the stack is empty
//         }
//     }
// };
