/*
BREADTH FIRST SEARCH OR LEVEL ORDER TRAVERSAL 
*/
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;
    node(int data){
        //constructor to initialise the nodes
        this->data = data;
        left=right=NULL;
    }
};

node* buildTree(node* root){
    int data ;
    cout<<"Enter the data : ";
    cin>>data;
    if(data == -1 ){
        return NULL;
    }
    root = new node(data);

    cout<<"Enter the data to the left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter the data to the right of "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(node* root){
    //queue bnao to store the nodes of every level separated by a separator (in this case that will be null)
    queue <node*> q;

    //root push kro fir kyuki root k level mei koi bhi nahi hai node toh ab ham separator push kar denge which is null
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        //jab tak queue khali na ho means abhi bhi koi node baki hai 

        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            //har level ko alag alag line mei print karne k liye null as a separator jo use kiya tha use yaha identifier ki tarh rakhenge 

            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

// void revLevelOrderTraversal(node* root){
//     queue <node*> rq;

//     rq.push(root);
//     rq.push(NULL);

//     queue <node*> q;
//     while(!rq.empty()){
//         node* temp = q.front();
//         q.push(rq.pop());

//         // if(temp == NULL){
//         //     cout<<endl;
//         //     //har level ko alag alag line mei print karne k liye null as a separator jo use kiya tha use yaha identifier ki tarh rakhenge 

//             if(rq.empty()){
//                 q.push(NULL);
//             }
//         // }
//         else{
//             cout<<temp->data<<" ";
//             if(temp->left){
//                 q.push(temp->left);
//             }
//             if(temp->right){
//                 q.push(temp->right);
//             }
//         } 
//     }
// }

int main(){
    node* root = NULL;
    
    // to build the tree
    root = buildTree(root);

    cout<<"The level order traversal of the tree you just built is : "<<endl;

    //for level order traversal or BFS
    levelOrderTraversal(root);

    // cout<<"The reverse level order traversal of the tree you built is : "<<endl;

    // //for reverse level order traversal 
    // revLevelOrderTraversal(root);

    return 0;
}