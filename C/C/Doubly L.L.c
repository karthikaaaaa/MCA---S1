#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
    struct node* prev;
};

struct node* head=NULL;
struct node* tail=NULL;

int IsFull()
{
    return head==NULL;
}

void InsertionAtFront(int value)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=head; 
    newnode->prev=NULL;
    if(head!=NULL)
    {
        head->prev=newnode;
    }
    head=newnode;

    if(tail==NULL)                 ///only one element
    {
        tail=newnode;
    }
}

void InsertionAtRear(int value)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    if(tail!=NULL)            //more than one element
    {
        newnode->prev=tail;
    }
    tail=newnode;

    if(IsFull())
    {
        head=newnode;
    }
}



int main()
{
    return 0;
   
}
