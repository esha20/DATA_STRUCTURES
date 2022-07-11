#include<bits/stdc++.h>
using namespace std;
class dnode{
public:
int data;
dnode* next;
dnode* prev;
dnode(int data)
{
    this->data=data;
    this->next=NULL;
    this->prev=NULL;
}
// ~dnode(){
//     int val=this->data;
//     if(next!=NULL)
//     {
//         delete next;
//         next=NULL;
//     }
// }
};
void insert_at_head(dnode* &head, int data)
{
    dnode* node= new dnode(data);
    node->next=head;
    node->prev=NULL;
    head->prev=node;
    head=node;
}
void insert_at_tail(dnode* &tail, int data)
{
    dnode* node=new dnode(data);
    node->prev=tail;
    node->next=NULL;
    tail->next=node;
    tail=node;
}
void insert_at_pos(dnode* &pos, int data)
{
    dnode *node = new dnode(data);
    node->next=pos->next;
    node->prev=pos;
    pos->next=node;

}
void delete_head(dnode* &head)
{
    dnode* temp=head;
    head=head->next;
    head->prev=NULL;

    delete temp;
}
void delete_tail(dnode* &tail)
{
    dnode* temp=tail;
    tail=tail->prev;
    tail->next=NULL;
    delete temp;
}
void delete_pos(dnode* &pos)
{
    dnode* temp=pos->next;
    temp->prev=NULL;
    pos->next=temp->next;
    temp->next=NULL;
    delete temp;
}
void print(dnode* &head)
{
    dnode* temp = head;
    while(temp->next!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data;
}
int main()
{
    dnode *newnode= new dnode(10);
    dnode *head= newnode;
    dnode *tail=newnode;
    int d,del,pref,n,m;
    cout<<"\nEnter the number of nodes you want to enter : ";
    cin>>n;
    while(n--)
    {
    cout<<"\nEnter your preference : \n1.Insertion at head. \n2.Insertion at tail. \n3.Insert at specific position.\n";
    cin>>pref;
    switch(pref){
        case 1:
        cout<<"\nEnter the data you want to insert at head: ";
        cin>>d;
        insert_at_head(head,d);
        break;
        case 2:
        cout<<"\nEnter the data you want to insert at tail: ";
        cin>>d;
        insert_at_tail(tail,d);
        break;
        case 3:
        {
            int pos;
            cout<<"\nEnter the position you eant to enter the node : ";
            cin>>pos;
            dnode *p = head;
            for (int i=0;i<pos-2;i++)
            {
                p=p->next;
            }
            cout<<"\nEnter the data you want to insert : ";
            cin>>d;
            if(pos==1)
            insert_at_head(head,d);
            else
            insert_at_pos(p,d);
            break;
        }
        default:
        cout<<"\nEnter the correct preference.";
        break;
        }
    }
    cout<<"\nThe doubly linked list is : ";
    print(head);
    cout<<endl;
    cout<<endl;
    cout<<"\nEnter the number of nodes you want to delete : ";
    cin>>m;
    while(m--)
    {
    cout<<"\nEnter your preference : \n1.delete head. \n2.Delete tail. \n3.Del node at specific position.\n";
    cin>>del;
    switch(del){
        case 1:
        delete_head(head);
        break;
        case 2:
        delete_tail(tail);
        break;
        case 3:
        {
            int position;
            cout<<"\nEnter the position you want to delete the node : ";
            cin>>position;
            dnode *del_p = head;
            for (int i=0;i<position-2;i++)
            {
                del_p=del_p->next;
            }
            if(position==1)
            delete_head(head);
            else
            delete_pos(del_p);
            break;
        }
        default:
        cout<<"\nEnter the correct preference.";
        break;
        }
    }
    
    cout<<"\nThe doubly linked list is : ";
    print(head);

    return 0;
}