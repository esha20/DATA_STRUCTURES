//program for insertion at the tail
#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node* next;
node *head;
node(int data)
{
    this->data=data;
    this->next=next;
}
};

void insert_at_end(node* &tail, int data){

node *newnode= new node(data);

tail->next=newnode;
newnode->next=NULL;
tail=newnode;
}

void print(node* &head)
{
//traversing through the linked list
node *temp=head;
while(temp!=NULL)
{
    cout<<temp->data<<" ";
    temp=temp->next;
}
cout<<endl;
}

int main()
{
    node * node1=new node(10);
    node* head= node1;
    node * tail = node1;
    int n;
    cout<<"\nEnter the number of nodes you want to insert : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter the data you want to insert at the end : ";
        int d;
        cin>>d;
        insert_at_end(tail,d);
    }

    cout<<"\n\nThe linked list after the insertion of the data is : ";
    print(head);
    return 0;
}
