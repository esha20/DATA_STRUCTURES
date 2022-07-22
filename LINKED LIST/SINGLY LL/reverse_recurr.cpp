//recurrsive solution for reversing a linked list
//tc = o(n) space complexity o(n)

#include<bits/stdc++.h>
using namespace std;
class node{
public :
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
node* rev(node* &head, node* curr, node* prev)
{
    //base case
    if(curr==NULL)  //the ll is being traversed completely
    {
        head=prev;
        return head;
    }
    rev(head,curr->next,curr);
    curr->next=prev;
}
node* recurr_rev(node* &head)
{
node* curr= head;
node* prev=NULL;
rev(head,curr,prev);
return head;
}


/*ANOTHER METHOD

node* rev(node* &head, node* curr, node* prev)
{
    //base case
    if(head==NULL || head->next == NULL)
    return head;

    node* head2=rev(head->next);
    head->next->next=head;
    return head2;
}
node* recurr_rev(node* &head)
{
return rev(head);
}

*/



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
    head=recurr_rev(head);
    print(head);
    return 0;
}