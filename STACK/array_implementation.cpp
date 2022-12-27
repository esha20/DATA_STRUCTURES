#include<bits/stdc++.h>
using namespace std;
class ds_stack{
public:
int top;
int *arr;
int size;
ds_stack(int size)
{
    this->size;
    arr = new int[size];
    top=-1;
}
void push(int ele){
if(size-top>1)
{
    top++;
    arr[top]= ele;
}
else{
    cout<<"\nStack overflow";
}
}
void pop(){
    if(top>=0)
    {
        cout<<"\nPopped : "<<arr[top];
        top--;
    }
    else{
        cout<<"\nStack underflow";
    }
}
int peek()
{
    if(top>=0)
    {
        return arr[top];
    }
    else{
        cout<<"\nStack is empty"<<endl;
        return -1;
    }
}
bool isEmpty(){
    if(top>=0)
    {
        return false;
    }
    return true;
}
};
int main()
{
    ds_stack s(5);
    int n,m;
    cout<<"\nEnter the number of elements you want to push : ";
    cin>>n;
    while(n--)
    {
    int ele;
    
    cout<<"\nEnter the element you want to push: ";
    cin>>ele;
    s.push(ele);
    }
    cout<<"\nHow many elements do you want to pop ? ";
    cin>>m;
    while(m--)
    {
        s.pop();
    }
    cout<<"\nThe ELement on top of stack is ? ";
    cout<<s.peek();

    if(s.isEmpty())
    {
        cout<<"\nStack is empty";
    }
    cout<<"\nStack is not empty";
    return 0;
}