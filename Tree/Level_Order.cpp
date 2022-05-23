#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;

struct Node
{
    int val;
    Node *left;
    Node *right;
};
Node* newnode(int val)
{
    Node* temp=new Node;
    temp->val=val;
    temp->left=temp->right=NULL;
    return temp;
}
void level_order(Node* root)
{
    if(root==NULL) return;
    queue<Node*> Q;
    Q.push(root);
    while(!Q.empty())
    {
        Node* current=Q.front();
        cout<<current->val<<" ";
        if(current->left!=NULL) Q.push(current->left);
        if(current->right!=NULL) Q.push(current->right);
        Q.pop();
    }
}
int main()
{
    struct Node* root=newnode(7);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(6);
    root->left->right=newnode(1);
    root->right->left=newnode(9);
    root->right->right=newnode(4);
    level_order(root);
    return 0;
}
