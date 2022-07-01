#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data=data;
        this->next=next;
    }

};
void insert_at_specific_pos(node* pos, int data){
node *newnode= new node(data);
newnode->next=pos->next;
pos->next=newnode;
}
void insert_at_end(node* &tail, int data){

node *newnode= new node(data);

tail->next=newnode;
newnode->next=NULL;
tail=newnode;
}
void print(node* &head)
{
//traversing through the linked list 
node* temp=head;
while(temp){
    cout<<temp->data <<" ";
    temp=temp->next;
}
}
int main()
{
    node *node1=new node(10);
    node *head=node1;
    node *tail=node1;
    insert_at_end(tail,12);
    insert_at_end(tail,15);
    insert_at_end(tail,20);
    cout<<"\nEnter the position you want to enter the node to : " ;
    int p,data;
    cin>>p;
    node *pos=head;
    for(int i=0;i<p-2;i++)
    {
        pos=pos->next;
    }
    cout<<"\nEnter the data you want to enter in the node : ";
    cin>>data;
    insert_at_specific_pos(pos,data);
    cout<<"\n\nThe linked list after the insertion is : ";

    print(head);
    return 0;
}