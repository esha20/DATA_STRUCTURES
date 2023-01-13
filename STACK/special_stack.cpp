#include<bits/stdc++.h>
class SpecialStack {
    // Define the data members. 
    stack<int> s;
    int mini,val;
    /*----------------- Public Functions of SpecialStack -----------------*/
    public:
    void push(int data) {
        // Implement the push() function.
//         s.push(-1);
        //if first ele push normally
        if(s.empty()){
            s.push(data);
            mini = data;
        }
        else{
            if(data > mini){
                s.push(data);
            }
            else{
                int val = 2*data - mini;
                s.push(val);
                mini= data;
            }
        }
    }

    int pop() {
        // Implement the pop() function.
        if(s.empty())
            return -1;
        
        if (s.top()>mini){
            int curr = s.top();
            s.pop();
            return curr;
        }
        else{
            int prevMin = mini;
            val = 2*mini - s.top();
            mini = val;
            s.pop();
            return prevMin;
        }
    }

    int top() {
        // Implement the top() function.
        if(s.empty()){
            return -1;
        }
        if(s.top()>mini)
        {
            return s.top();
        }
        else{
            return mini;
        }
    }

    bool isEmpty() {
        // Implement the isEmpty() function.
        return s.empty();
    }

    int getMin() {
        // Implement the getMin() function.
        if(s.empty())
            return -1;
        
        return mini;
    }  
};