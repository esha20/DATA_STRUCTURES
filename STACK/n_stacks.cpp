/*
Implementation of n stacks in an array to perform push and pop operations.
*/

#include <bits/stdc++.h> 
class NStack
{
public:
    // Initialize your data structure.
    int *top;
    int *arr;
    int *next;
    int freespot,n,s;
    NStack(int N, int S)
    {
        // Write your code here.
        n = N;    //no of stacks
        s = S;    //no of ele
        freespot =0;
        top = new int [n];
        arr = new int [s];
        next = new int [s];
        
//         memset(top, -1 , sizeof(top));    
        for(int i=0;i<n;i++){
            top[i]=-1;
        }//initialising the value of all the stacks with -1 at first since the stacks are empty.
        
        for (int i=0;i<s;i++){
            next[i]=i+1;    //initialising the next array 
        }
        next[s-1] = -1;    //last wale k liye koi freespot nahi bacha hai toh -1.
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        // Write your code here.
        
        //check overflow
        if(freespot == -1)
            return false;
        
        int index = freespot;    //pehli freespot de do push karne k liye
        arr[index] = x;            //push the element in the frespot of the arr stored as index.
        freespot = next[index];    //freespot ko update kar do
        next[index] = top[m-1];    //next ke index mei ab vo value hogi jo push kiye hue ele k bad present hai stack mei jo hame top se milegi.
        top[m-1] = index;    //ab iss particular stack ka top ele index pr pada hai arr mei toh hamne uska index store kar liya hai top array mei.
        
        return true;
        
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        // Write your code here.
        
        //stack underflow ke liye check karo
        if(top[m-1] == -1)
            return -1;
        
        int index = top[m-1];    //stack ke top pe jo ele hai vo kaha stored hai vo index mei copy kiya with the help of top array
        top[m-1]=next[index];     //top ab next ele of stack ko point karega
        next[index] = freespot;    //this index is now empty so the next [index] corresponding to this points to the next freespot;
        freespot = index;    //updating the freespot kyuki ab next freespot vo banega jaha ele pop ho chuka hai.
        
        return arr[index];
    }
};