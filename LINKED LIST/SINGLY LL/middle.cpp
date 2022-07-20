//program to find the middle element of the linked list
//tc = O(n) and constant space

#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node* next;
node(int data)
{
    this->data=data;
    this->next=NULL;
}
};
void insert_at_tail(node* &tail, int d)
{
node* newnode=new node(d);
tail->next=newnode;
newnode->next=NULL;
tail=newnode;
}
void middle(node* &head)
{
node* fast=head;
node* slow=head;

while(fast!=NULL && fast->next!=NULL)
{
    fast=fast->next->next;
    slow=slow->next;
}
cout<<slow->data;
}
void print(node* &head)
{
    node* temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    node* node1=new node(10);
    node* head=node1;
    node* tail=node1;
    cout<<"\nEnter the number of nodes you want to enter : ";
    int n;
    cin>>n;
    while(n--)
    {
        cout<<"\nEnter the data you want to enter for the node : ";
        int d;
        cin>>d;
        insert_at_tail(tail,d);
    }
    cout<<"\nthe linked list is : ";
    print(head);
    cout<<"\nThe middle element of the linked list is : ";
    middle(head);
    return 0;
}