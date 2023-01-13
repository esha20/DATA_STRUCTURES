#include<bits/stdc++.h>
using namespace std;

int main(){
   
   //creating a queue
    queue<int> q;

    //entering some ele in queue
    q.push(1);
    q.push(2);
    q.push(3);

    //checking the front ele of queue
    cout<<"The front element of queue is : "<<q.front()<<endl;

    //checking the back
    cout<<"The back element of queue is : "<<q.back()<<endl;
    
    q.push(4);

    //again checking the front and back
    cout<<"After the insertion of another element : "<<endl;
    cout<<"The front element of queue is : "<<q.front()<<endl;
    //front remains the same , the back changes.
    cout<<"The back element of queue is : "<<q.back()<<endl;

    //removing an ele 
    q.pop();

    //checking the back now 
    cout<<"After the removal of an ele : "<<endl;
    cout<<"The back element of queue is : "<<q.back()<<endl;

    //checking if the queue is empty
    cout<<"Is empty ? "<<q.empty()<<endl;

    //the size of queue can be checked by the size element 
    cout<<"The size of the element is : "<<q.size()<<endl;
    return 0;
}