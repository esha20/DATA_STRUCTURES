#include<bits/stdc++.h>
using namespace std;
class dnode{
    public:
    int data;
    dnode* prev;
    dnode* next;
    dnode(int data)
    {
        cout<<"\nNode iniitisalised.";
        this->data=data;
        this->prev=NULL;
        this->next=NULL ;
    }
};
void print(dnode* &head)
{
    dnode *temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
dnode *newnode= new dnode(10);
dnode* head=newnode;
cout<<"\nThe doubly linked  list is : ";
print(head);
return 0;
}