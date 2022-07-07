//insertion of node at the head of the Linkedlist.
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node *head;
    //parameterised constructor
    node(int data)
    {
        this->data=data;
        this->next= NULL;
    }
};
void insert_at_head(node* &head, int d)
{
//create a node first and put the given data in it.
node *newnode= new node(d);
newnode->next=head;
head=newnode;
}
void print(node* &head)
{
    //traversing through the linked list
    node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }    
}
int main()
{
    node *node1=new node(10);
    node *head=node1;
    cout<<"\nThe linked list before the insertion is : ";
    print(head);

    cout<<"Enter the number of nodes you want to insert : ";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    cout<<"\nEnter the data you want to store in "<<i<<" node : ";
    int d;
    cin>>d;
    cout<<"Inserting node at head\n ";
    insert_at_head(head,d); 
    }
    cout<<"\nThe linked list now is : ";
    print(head);
    return 0;
}