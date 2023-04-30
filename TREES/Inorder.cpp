#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data = data;
        left= right = NULL;
    }
};
void inorder(node* &currnode){
    if(currnode==NULL){
        return;
    }

    inorder(currnode->left);
    cout<<currnode->data<<" ";
    inorder(currnode->right);
}
int main(){
    node * troot = new node(1);
    troot->left = new node(2);
    troot->right = new node(3);
    troot->left->left= new node (4);
    troot->left->right = new node(5);
    troot->left->right->right = new node(8);
    troot->right->left = new node(6);
    troot->right->right = new node(7);
    troot->right->right->left = new node(9);

    cout<<"The inorder traversal of the tree is : "<<endl;
    inorder(troot);
    return 0;
}