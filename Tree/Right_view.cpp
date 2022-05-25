#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
struct Node
{
    int val;
    Node *left;
    Node *right;
};

Node* newNode(int val)
{
    Node* temp=new Node;
    temp->val=val;
    temp->left=temp->right=NULL;
    return temp;
}

void view(Node* root)
{
   if(root==NULL)
    return ;
   cout<<root->val<<" ";
   if(root->right!=NULL) view(root->right);
   else view(root->left);
}


int main()
{
    Node* root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->left->right=newNode(8);
    root->right->left=newNode(6);
    root->left->right=newNode(5);
    root->right->right=newNode(7);
    cout<<"\nRight View of the tree:\n";
    view(root);
    return 0;
}
