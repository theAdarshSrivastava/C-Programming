#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    struct Node *left,*right;
};
Node* newnode(int val)
{
    Node* temp=new Node;
    temp->val=val;
    temp->right=temp->left=NULL;
    return temp;
}
void print_inorder(struct Node* node)
{
    if(node==NULL)
        return;
    print_inorder(node->left);
    cout<<node->val<<" ";
    print_inorder(node->right);
}
void print_preorder(struct Node* node)
{
    if(node==NULL)
        return;
    cout<<node->val<<" ";
    print_preorder(node->left);
    print_preorder(node->right);
}
void print_postorder(struct Node* node)
{
    if(node==NULL)
        return;
    print_postorder(node->left);
    print_postorder(node->right);
    cout<<node->val<<" ";
}
int main()
{
    struct Node* root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    cout<<"Inorder Traversal\n";
    print_inorder(root);
    cout<<"\nPostorder Traversal\n";
    print_postorder(root);
    cout<<"\nPreorder Traversal\n";
    print_preorder(root);
    return 0;
}
