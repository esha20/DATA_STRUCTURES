/*
Implementation of circular queue using array(the main function is not here because this code snippet is from a question i solved in coding ninjas).
*/
#include <bits/stdc++.h> 
class CircularQueue{
    int *arr;
    int qfront, rear, size;
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        // Write your code here.
        size =n;
        arr = new int [size];
        qfront =-1;
        rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // Write your code here.
        //check if the queue is full
        if((qfront ==0 && rear == size-1) || (rear == (qfront-1)%(size-1)) )
            return false;
        else if(rear == size-1 && qfront !=0){
            rear =0;
        }
        else if(qfront ==-1){
            rear = qfront = 0;
        }
        else{
            rear++;
        }
        arr[rear] = value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // Write your code here.
        //check for empty
        if(qfront == -1){
            return -1;
        }
        int ans = arr[qfront];
        arr[qfront] = -1;
        if(qfront == rear){
            //single ele
            qfront = rear = -1;
        }
        else if (qfront==size-1){
            qfront = 0;
        }
        else{
            qfront ++;
        }
        return ans;
    }
};