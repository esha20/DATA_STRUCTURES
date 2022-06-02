#include<iostream>
using namespace std;
class node{
	public:
	node* next;
	int info;
};
void insert_begin(node* &head, int val)
{
	node* newnode = newnode;
	newnode-> info = val;
	newnode->next= head;
	head=newnode;
}
void display(node* &head)
{
	node* temp=head;
	if(temp==NULL)
	{
		cout<<"Empty";
	}
	while(temp!=NULL)
	{
	cout<<temp->info;
	temp=temp-> next;
	}
}
int main()
{
	node* head = NULL;
	int n , val;
	cout<<"Enter the number of nodes to be inserted";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the value of "<<i+1<<"Th node";
		cin >>val;
		insert_begin(head,val);
	}
	display(head);
	return 0;
}
