//program for implementation of two stacks in a single array.
//here we fill one stack from the left to right and the other from right to left

#include<bits/stdc++.h>
using namespace std;
class ds_stack{
public:
int top1;
int top2;
int* arr;
int size;
ds_stack(int s){
    this->size=s;
    top1=-1;
    top2=s;
    arr = new int [s];
}
void push1(int ele)
{
    if(top2-top1>1)
    {
        top1++;
        arr[top1]=ele;
    }
    else
    cout<<"\nstack overflow";
}
void push2(int ele)
{
    if(top2-top1>1)
    {
        top2--;
        arr[top2]=ele;
    }
    else
    cout<<"\nstack overflow" ;
}
void pop1()
{
    if(top1>=0){
        cout<<"\nPopped : "<<arr[top1];
        top1--;
    }
    else
    cout<<"\nstack underflow.";
}
void pop2()
{
    if(top2>=0){
        cout<<"\nPopped: "<<arr[top2];
        top2++;
    }
    else
    cout<<"\nstack underflow.";
}
};
int main()
{
    ds_stack s(10);
    int n,m;
    cout<<"\nEnter the number of elements you want to push in first stack: ";
    cin>>n;
    while(n--)
    {
    int ele;
    
    cout<<"\nEnter the element you want to push: ";
    cin>>ele;
    s.push1(ele);
    }
    cout<<"\nEnter the number of elements you want to push in second stack: ";
    cin>>n;
    while(n--)
    {
    int ele;
    
    cout<<"\nEnter the element you want to push: ";
    cin>>ele;
    s.push2(ele);
    }
    cout<<"\nHow many elements do you want to pop from stack 1? ";
    cin>>m;
    while(m--)
    {
        s.pop1();
    }
    cout<<"\nHow many elements do you want to pop from stack 2? ";
    cin>>m;
    while(m--)
    {
        s.pop2();
    }
    return 0;
}