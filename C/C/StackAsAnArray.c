#include <stdio.h>

#define MAX 10

int stack[MAX];  
int top = -1;   

int isEmpty() {
    return top == -1;
}

int isFull() {
    return top == MAX - 1;
}

void push(int value) {
    if (isFull()) {
        printf("Stack Overflow! Cannot push %d\n", value);
        return;
    }
    stack[++top] = value;
    printf("Pushed %d\n", value);
}

int pop() {
    if (isEmpty()) {
        printf("Stack Underflow! Cannot pop\n");
        return -1;  
    }
    return stack[top--];
}



int main() {
    int option;
    printf("Choose an option\n1.Insert\t2.Delete\n");
    scanf("%d", &option);
    if(option == 1){
        int num;
        printf("Enter the value to insert\n");
        scanf("%d",&num);
        push(num);
    } else if(option == 2){
       pop();
    } else {
                printf("Invalid Option!\n");

    }
   

    return 0;
}
