#include <bits/stdc++.h>
using namespace std;
class ll_stack{
    public:
    int data;
    ll_stack* next;
    // ll_stack* head;
    ll_stack* top=NULL;
    ll_stack(){
        this->data= 0;
        this->next=top;
            }
    ll_stack(int data)
    {
        this->data = data;
        this->next = top;
    }
};
void push(int data)
{
    ll_stack *newnode= new ll_stack(data);
    if(newnode == NULL)
    {
        cout<<"\nStack overrflow";
    }
    newnode->top=newnode;
}
// void pop()
// {
//     if(top==NULL)
//     {
//         cout<<"\nStack underflow";
//     }
//     cout<<top->data;
//     ll_stack * temp=top
// }
int main(){
    cout<<"\nHow many nodes youo want to push ?";
    int n,m;
    cin>>n;

    while(n--)
    {
        int d;
        cout<<"\nEnter the data you want to push in stack : ";
        cin>>d;
    ll_stack *node1 = new ll_stack(d);
    }
    return 0;
}