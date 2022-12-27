#include <bits/stdc++.h>
using namespace std;
class ll_stack{
    public:
    int data;
    ll_stack* next;
    ll_stack* top=NULL;
    ll_stack(int data)
    {
        this->data = data;
        this->next=top;
    }
};
void push(int data)
{
    ll_stack newnode= new node(data);
    if(newnode==NULL)
    {
        cout<<"\nStack overrflow";
    }
    top=newnode;
}
void pop()
{
    if(top==NULL)
    {
        cout<<"\nStack underflow";
    }
    cout<<top->data;
    ll_stack* temp=top
}
int main(){
    cout<<"\nHow many nodes youo want to push ?";
    int n,m;
    cin>>n;
    ll_stack* node1;
    while(n--)
    {
        int d;
        cout<<"\nEnter the data you want to push in stack : ";
        cin>>d;
        node1.push(d);
    }
    return 0;
}