#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* head= NULL;

void InsertionAtFront(int value)
{
    struct node* newnode=(struct node*) malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=head;
    head=newnode; 
}

void InsertionAtRear(int value)
{
    struct node* newnode=(struct node*) malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    
    if(head==NULL)
    {
        head=newnode;
    }

    else{
    struct node* temp=head;      //for(temp=head;temp!=NULL;temp=temp->next)
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;}
}

void InsertionAtPosition(int value,int pos)
{
    struct node* newnode=(struct node*) malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;

    if(pos<1)
    {
        printf("Invalid position");
        free(newnode);
        return;    
    }

    if(pos==1)
    {
        newnode->next=head;
        head=newnode;
        return;
    }

    struct node* temp=head;
    for(int i=1;i<pos-1 && temp!=NULL;i++)          //temp != NULL------------To avoid crashing on short list
    {
        temp=temp->next;
    }

    if(temp==NULL)
    {
        printf("Invalid position");
        free(newnode);
        return;
    }

    newnode->next=temp->next;
    temp->next=newnode;
}

void display()
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int main()
{
    int option;
    while(1){
    printf("\nDo you want to enter at the 1.front or 2.rear or 3.At a position? ");
    scanf("%d",&option);
    if(option==1)
    {
        int i,num,val;
        printf("How many elements do you want ot enter? ");
        scanf("%d",&num);

        printf("Enter %d elements to be inserted: ",num);
        for(i=0;i<num;i++)
        {
          scanf("%d",&val);
          InsertionAtFront(val);
        }
    }

    if(option==2)
    {
        int i,num,val;
        printf("How many elements do you want ot enter? ");
        scanf("%d",&num);

        printf("Enter %d elements to be inserted: ",num);
        for(i=0;i<num;i++)
        {
          scanf("%d",&val);
          InsertionAtRear(val);
        }
    }

    if(option==3)
    {
        int position,val;
        printf("Enter the position where you wanna enter the element? ");
        scanf("%d",&position);

        printf("Enter element to be inserted: ");
        scanf("%d",&val);
        InsertionAtPosition(val, position);
    }

    printf("The elements of the list are: ");
    display();
    }

    return 0;
}