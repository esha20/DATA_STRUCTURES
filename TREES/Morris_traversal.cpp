#include<bits/stdc++.h>
using namespace std;
class node{
    public: 
        int data;
        node* left;
        node* right;

    node(int data){
        this->data = data;
        left=right=NULL;
    }
};

node* buildtree(node* &root){
    int data;
    cout<<"Enter the data of node: ";
    cin>>data;
    root= new node(data);

    if(data == -1)
        return NULL;

    cout<<"Enter the data you want to enter to the left of the node : "<<data<<endl;
    root->left = buildtree(root->left);
    
    cout<<"Enter the data you want to enter to the right of the node : "<<data<<endl;
    root->right = buildtree(root->right);

    return root;
}

void morristraversal(node* curr){

    if(curr==NULL)
        return;

    node* pre;

    while(curr){
        //while current node is not null

        if(!curr->left){
            //if the left node of the current node does not exist

            //print the data
            cout<<curr->data<<" ";

            //move to the rightof the current node.
            curr=curr->right;
        }
        else{

            //if the left node of the current node exists , 

            //find the inorder predecessor of the current node
            //how?  go to the left first and then move right untill right becomes null
            pre = curr->left;
            while(pre->right && pre->right != curr)
                pre=pre->right;
            
            //make curr as the right child of predecessor , this happens because we are making a threaded binary tree.

            //if the right of the predecessor does not exists,point the predecessor right child to current node
            if(!pre->right){
                pre->right = curr;
                //after the predecessor->right points to curr, now move current node to its left
                curr= curr->left;
            }

            //if the right child exists. means this method was already done once, so we might have traversed all the nodes we wanted so now thw predecessor can point to null again.
            //revert the changes in the if part ans restore the original tree ie fix the right child of pre
            else{
                pre->right = NULL;
                cout<<curr->data<<" ";
                curr= curr->right;
            }
        }
    }
} 
int main(){
    node* root;
    buildtree(root);
    cout<<"Morris Inorder traversal is : ";
    morristraversal(root);
    return 0;
}