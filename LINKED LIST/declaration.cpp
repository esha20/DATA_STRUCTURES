#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node *next;
node()
{
    //default constructor
    this->data=data;
    this->next=next;
}
node(int data){
    //parameterised constructor 
    this->data = data;
    this->next=NULL;
}
};
int main()
{
    //statically created node
    node n;
    cout<<"The data in the linked list is : " <<n.data<<endl;
    cout<<n.next;

    //dynamically created node
    node *node1=new node;
    cout<<"The data in the linked list is : " <<node1->data<<endl;
    cout<<node1->next;

    //the above two nodes give garbage values as outputs.
    //we can use a constructor to initialise the value in the linked list.
    node *node2= new node(10);
    cout<<"The data in the linked list is : " <<node2->data<<endl;
    cout<<node2->next;
    return 0;
}