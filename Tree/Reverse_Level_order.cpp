#include<iostream>
#include<bits/stdc++.h>
#include<queue>
#include<vector>
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
void reverse_level_order(Node* root)
{
    if(root==NULL) return;
    vector<int> ans;
    queue<Node*> Q;
    Q.push(root);
    while(!Q.empty())
    {
        Node* current=Q.front();
        ans.push_back(current->val);
        if(current->right!=NULL) Q.push(current->right);
        if(current->left!=NULL) Q.push(current->left);
        Q.pop();
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
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
    cout<<"Level Order Traversal:\n";
    level_order(root);
    cout<<"\nReverse Level Order Traversal:\n";
    reverse_level_order(root);
    return 0;
}
