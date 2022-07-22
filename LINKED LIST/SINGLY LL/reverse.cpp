//iterative solution for reversing the linked list
//tc = o (n) and space is constant

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
void insert_at_tail(node* &tail, int data){
    node* newnode= new node(data);
    newnode->next=NULL;
    tail->next=newnode;
    tail=newnode;
}
node* reverse(node* &head)
{
    node* prev=NULL;
    node* curr=head;
    node* nextnode=NULL;
    while(curr!=NULL)
    {
        nextnode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextnode;
    }
   return prev;
}
void print(node* &head)
{
    node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    node* node1=new node(10);
    node* head=node1;
    node* tail=node1;
    int n;
    cout<<"\nEnter the number of nodes you want to enter in ll :";
    cin>>n;
    while(n--)
    {
    int d;
    cout<<"\nEnter the data of the node : ";
    cin>>d;
    insert_at_tail(tail,d);
    }
    cout<<"\nThe linked list before reversal is : ";
    print(head);
    cout<<"\nThe linked list after reversal is : ";
    head=reverse(head);
    print(head);
    return 0;
}