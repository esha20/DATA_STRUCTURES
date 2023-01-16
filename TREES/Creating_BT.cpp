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
    if(data == -1)
        return NULL;
    
    cout<<"Enter the data you want to enter to the left of the node : "<<data<<endl;
    root->left = buildTree(root->left);             //last left node tak pehle jata hai fir jab null milta hai toh back jata hai fir right dekhta hai 
    // agar right mei koi node mil jaye toh uske bhi left ei check karta hai last tak fir dubara right dekhta hai back jakr.

    cout<<"Enter the data you want to enter to the right of the node : "<<data<<endl;
    root->right = buildTree(root->right);

    return root;            // jab ek bar ban jaye toh ham root tak pohuch jate hai aur root return kar denge.
}
int main()
{
    node * root = NULL;

    //to build the tree we are going to use this function.
    root = buildTree(root);

    return 0;
}