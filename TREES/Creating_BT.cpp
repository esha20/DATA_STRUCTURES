/*
Creating binary tree in cpp
*/
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    //constructor for the node
    node(int val){
        data = val;
        left=right=NULL;
    }
};
// int main(){
//     node* root = new node (1);
//     root->left = new node(2);
//     root->right = new node(3);
//     root->left->right = new node(5);
//     return 0;
// }

//What if we built the tree not manually but by recursion 
//i will call a buildtree function to make the tree for us
node* buildTree(node* root){
    int data;
    cout<<"Enter the data : ";
    cin>>data;

    root = new node(data);

    //-1 means no data is to be inserted and no node is to be made and that this is the leaf node of the tree with no further children nodes.
    if(data == -1)
        return NULL;
    
    cout<<"Enter the data you want to enter to the left of the node : "<<data<<endl;

    //build the left subtree using recursion
    root->left = buildTree(root->left);             //last left node tak pehle jata hai fir jab null milta hai toh back jata hai fir right dekhta hai 
    // agar right mei koi node mil jaye toh uske bhi left ei check karta hai last tak fir dubara right dekhta hai back jakr.

    cout<<"Enter the data you want to enter to the right of the node : "<<data<<endl;
    //build the right subtree using recursion
    root->right = buildTree(root->right);

    return root;            // jab ek bar ban jaye toh ham root tak pohuch jate hai aur root return kar denge.
}

void buildTreeLOT(node* &root){
    int data;
    cout<<"Enter the data : ";
    cin>>data;

    //root banao
    root = new node(data);

    queue <node*> q;

    //root ko push karo
    q.push(root);
    // q.push(NULL);        dont need a separator because we are only going to take values to build the tree and not print the bfs in this function.

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        int leftdata;
        cout<<"Enter the left node for "<<temp->data<<endl;
        cin>>leftdata;

        //left node banao
        if(leftdata != -1){
            temp->left = new node(leftdata);
            q.push(temp->left);
        }

        int rightdata;
        cout<<"Enter the node for the right node of "<<temp->data<<endl;
        cin>>rightdata;

        //right node banao
        if(rightdata != -1 ){
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
}

void levelOrderTraversal(node* root){
    queue <node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node * temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;

            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    node * root = NULL;

    //to build the tree we are going to use this function.
    // root = buildTree(root);

    //using levelordertraversal to build the tree
    buildTreeLOT(root);

    //we can change the above sentence as root = buildTreeLOT(root) if we return the root from the function and set the return type as node*

    //to check if the tree is build successfully, we will make the bfs (level order traversal of the tree)
    levelOrderTraversal(root);
    return 0;
}