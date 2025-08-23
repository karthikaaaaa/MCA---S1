#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;

};

struct node* head=NULL;

void InsertionAtFront(int value)
{
    struct node* newnode=(struct node*) malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=head;
    head=newnode; 
}

int IsNull()
{
    return head==NULL;
}

void DeletionAtFront()
{
    if(IsNull())
    {
        printf("List is Empty");
        return;
    }

    struct node* temp=head;
    head=head->next;
    free(temp);
}

void DeletionAtRear()
{
    if(IsNull())
    {
        printf("List is empty");
        return;
    }

    struct node* temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
}

void DeletionAtPosition(int pos)
{
    if(IsNull())
    {
        printf("List is empty");
        return;
    }

    if(pos<1)
    {
        printf("Invalid Position");
        return;
    }

    if(pos==1)
    {
        struct node* temp=head;
        head=head->next;
        free(temp);
        return;
    }

    struct node*temp=head;
    for(int i=1;i<pos-1 && temp->next!=NULL;i++)
    {
        temp=temp->next;
    }

    if(temp->next==NULL)
    {
        printf("Invalid Position");
        return;
    }

    struct node*del=temp->next;          //del points to the elment to be deleted
    temp->next=temp->next->next;
    free(del);

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
    while(1)
    {
        int num,position;
        printf("\nEnter your action:\n1.Insertion\n2.Deletion at front\n3.Deletion at rear\n4.Deletion at a position\n5.Display\n");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
              printf("Enter the element to be inserted");
              scanf("%d",&num);
              InsertionAtFront(num);
              display();
              break;
            case 2:
              DeletionAtFront();
              break;
            case 3:
              DeletionAtRear();
              break;
            case 4:
              printf("Enter the position of element to be deleted: ");
              scanf("%d",&position);
              DeletionAtPosition(position);
              break;
            case 5:
              display();
              break;
            default:
              printf("Invalid input");
              break;
        }
    }


    return 0;
  
}






