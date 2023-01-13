/*
Array implementation of queue(main function is not included since this is the implementation function of coding ninjas)
*/
#include <bits/stdc++.h> 
class Queue {
    int qfront, rear, size;
    int *arr;
public:
    Queue() {
        // Implement the Constructor
        size = 100001;
        arr = new int [size];
        qfront =0; rear=0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if (qfront == rear ){
            return true;
        }
        return false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        //check overflow
        if(rear == size)
            cout<<"queue is full"<<endl;
        
        else{
            arr[rear] = data;
            rear ++;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        //check if empty
        if(rear == qfront)
            return -1;
        else{
            int ans=arr[qfront];
            arr[qfront] = -1;
            qfront++;
            return ans;
        }
    }

    int front() {
        // Implement the front() function
        if(rear == qfront)
            return -1;
        else
            return arr[qfront];
            
    }
};