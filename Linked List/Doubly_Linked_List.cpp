#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *head,*tail=NULL;

void addNodeLast(int data)
{
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->prev=NULL;
    temp->next=NULL;

    if(head==NULL)
    {
        head=temp;
        tail=temp;
    }
    else
    {
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}

//Insert the node at the beginning of the node
void addNodeBegin(int data)
{
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;
    temp->prev=NULL;
    if(head==NULL)
    {
        head=temp;
        tail=temp;
    }
    else
    {
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}

//Insert at specified location
void addNodeMiddle(int data, int position)
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;
    temp->prev=NULL;

    struct Node *t=head;

    if(position==1)
    {
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    else
    {
        int cnt=1;
        while(cnt<position-1)
        {
            t=t->next;
            cnt++;
        }
        temp->next=t->next;
        t->next=temp;
        temp->prev=t;
        t->next->prev=temp;
    }
}


//Delete the node from the linked list
void deleteNodePosition(int Position)
{
    int cnt=1;
    struct Node *last=NULL;
    struct Node *curr=head;
    if(Position==1)
    {
        curr->next->prev=NULL;
        head=curr->next;
        curr->next=NULL;
        delete curr;
    }
    else
    {
        while(cnt<Position)
        {
            last=curr;
            curr=curr->next;
            cnt++;
        }
        last->next=curr->next;
        curr->next->prev=last;
        curr->prev=NULL;
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
    addNodeLast(10);
    addNodeLast(19);
    addNodeLast(8);
    addNodeLast(99);
    addNodeBegin(74);
    addNodeBegin(81);
    addNodeMiddle(33,3);
    addNodeMiddle(67,5);
    display();
    deleteNodePosition(4);
    display();
    deleteNodePosition(2);
    display();
    return 0;
}
