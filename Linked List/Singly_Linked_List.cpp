#include<bits/stdc++.h>
#include<iostream>
using namespace std;


//create the Node
struct Node{
    int data;
    struct Node *next;
};

struct Node *head,*tail=NULL;

//Adding the node into last node
void addnodelast(int data)
{
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;

    if(head==NULL)
    {
        head=temp;
        tail=temp;
    }
    else
    {
        tail->next=temp;
        tail=temp;
    }
}

//Adding the node in front of first node
void addnodefront(int data)
{
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;

    if(head==NULL)
    {
        head=temp;
        tail=temp;
    }
    else{
        temp->next=head;
        head=temp;
    }
}

//Adding the node in middle of node
void addnodemiddle(int data,int position)
{
    int cnt=1;
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;
    struct Node* curr=head;

    if(position==1)
    {
        temp->next=head;
        head=temp;
    }
    else{
    while(cnt<position-1)
    {
        curr=curr->next;
        cnt++;
    }
    temp->next=curr->next;
    curr->next=temp;
    }
}

//Delete the node based on position
void deleteNodePosition(int position)
{
    int cnt=1;
    struct Node *prev=NULL;
    struct Node *curr=head;

    if(position==1)
    {
        head=curr->next;
        curr->next=NULL;
        delete curr;
    }
    else{
    while(cnt<position)
    {
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    int t;
    t=curr->data;
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
    }
}

//Display the linked list
void display()
{
    struct Node* curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<"\n";
}

int main()
{
    addnodelast(10);
    addnodelast(16);
    addnodefront(19);
    addnodefront(26);
    addnodelast(79);
    addnodefront(63);
    addnodemiddle(84,3);
    addnodemiddle(10,5);
    addnodemiddle(91,2);
    addnodemiddle(77,1);
    display();
    deleteNodePosition(1);
    display();
    deleteNodePosition(2);
    display();
    deleteNodePosition(5);
    display();
    return 0;
}
