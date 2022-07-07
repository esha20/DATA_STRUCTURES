#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node *next;
node(int data)
{
    this->data=data;
    this->next=NULL;
}
};

//deletinig the first node
void delete_head(node* &head)
{
node* temp1= head;
head = temp1->next;
delete temp1;
}

//insertion of node at the head of linked list
void insert_at_head(node* &head, int data)
{
node* newnode= new node(data);
newnode->next=head;
head=newnode;
}

//delete the node when the position is given
void delete_specific(node* &pos)
{
pos->next=pos->next->next;
}

//inserting the node at tail
void insert_at_tail(node* &tail, int data)
{
node *newnode = new node(data);
newnode->next=NULL;
tail->next=newnode;
tail=newnode;
}

//inserting node at specific position
void insert_at_specific(node* &pos, int data)
{

node *newnode= new node(data);
newnode->next = pos->next;
pos->next=newnode;
}

//to print the entire linked list
void print(node* &head)
{
node *temp=head;
while (temp)
{
    cout<<temp->data<<" ";
    temp=temp->next;
}
}


int main()
{
    node* node1 = new node(10);
    
    node* node2 = new node (12);
    node1->next=node2;
    node* head=node1;
    node* tail=node2;
    int data;
    cout<<"\nEnter your preference : \n1.For insertion at head\n2.For insertion at tail.\n3.For insertion at specific position.\n ";
    int pref;
    cin>>pref;
    switch (pref)
    {
    case 1:
    cout<<"\nEnter the data you want to enter:";
    cin>>data;
    insert_at_head(head, data);
    break;
    case 2:
    cout<<"\nEnter the data you want to enter:";
    cin>>data;
    insert_at_tail(tail,data);
    break;
    case 3: 
    {
    cout<<"\nEnter the position you want to enter the node to : " ;
    int p;
    cin>>p;
   
    node* pos=head;
    for(int i=0;i<p-2;i++)
    {
        pos=pos->next;
    }
    cout<<"\nEnter the data you want to enter in the node : ";
    cin>>data;
     if(p==1)
    insert_at_head(head,data);
    else
    insert_at_specific(pos,data);
    }
    break;
    default:
    cout<<"\nEnter the correct choice :" ;
        break;
    }
    cout<<"\n\nThe linked list after insertion is : ";
    print(head);


    //now deletion :
    cout<<"\nEnter the position you want to delete the node : " ;
    int p;
    cin>>p;
    node* pos=head;
    for(int i=0;i<p-2;i++)
    {
        pos=pos->next;
    }
    if(p==1)
    delete_head(head);
    else
    delete_specific(pos);
    cout<<"\n\nThe linked list after deletion is: ";
    print(head);
    return 0;
}