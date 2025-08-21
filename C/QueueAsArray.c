#include <stdio.h>
#define MAX 100
int queue[MAX];
int rear = -1, front = -1;
void display();
int enqueue(int value){
    if(rear == MAX - 1) {
        printf("Queue Overflow");
        return 1;
    }
    if(front == -1){
        front++;
    }
    rear++;
    queue[rear] = value;
    display();
}
int dequeue(){
    if(rear == -1 || front > rear){
        printf("Queue is empty");
    }
    printf("%d is deleted\n",queue[front]);
    front++;
    display();

}
void display(){
    printf("Elements are : ");
    for(int i = front; i <= rear ; i++ ){
        printf("%d\t",queue[i]);
    }
}
int main(){

        int option;
        int num;
        while(1){
        printf("\n\nEnter the choice \n1.Enqueue\n2.Dequeue\n3.Display\n");
        scanf("%d",&option);
        switch(option){
            case 1 :
            printf("Enter the element to enqueue\n");
            scanf("%d",&num);
            enqueue(num);
            break;
            case 2 :
            dequeue();
            break;
            case 3:
            display();
            break;
            default:
            printf("Enter a valid option\n");
            break;
        }
    }
   
 return 0;
}