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

int height(Node* root)
{
   if(root==NULL)
        return -1;

   int left=height(root->left);
   int right=height(root->right);
   return max(left,right)+1;
}

void inorder(Node* root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

int main()
{
    Node* root=newNode(9);
    root->left=newNode(3);
    root->right=newNode(4);
    root->left->left=newNode(1);
    root->left->left->left=newNode(5);
    root->right->left=newNode(2);
    root->left->left->left->left=newNode(8);
    root->right->right=newNode(7);
    inorder(root);
    int h=height(root);
    cout<<"\nHeight of the tree is "<<h;
    return 0;
}
