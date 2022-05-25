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
        return 0;

    int l=height(root->left);
    int r=height(root->right);
    return max(l,r)+1;
}

int diameter(Node* root)
{
    if(root==NULL)
        return 0;
    int lh=height(root->left);
    int rh=height(root->right);
    int current_diameter=lh+rh+1;

    int ld=diameter(root->left);
    int rd=diameter(root->right);
    return max(current_diameter,max(ld,rd));
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
    int d=diameter(root);
    cout<<"\nDiameter of the tree is "<<d;
    return 0;
}
