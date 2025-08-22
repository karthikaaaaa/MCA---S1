#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* head= NULL;

void insertionAtFront(int value)
{
    struct node* newnode=(struct node*) malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=head;
    head=newnode; 
}

void insertionAtRear(int value)
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
    printf("\nDo you want to enter at the 1.front or 2.rear? ");
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
          insertionAtFront(val);
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
          insertionAtRear(val);
        }
    }

    printf("The elements of the list are: ");
    display();
    }

    return 0;
}