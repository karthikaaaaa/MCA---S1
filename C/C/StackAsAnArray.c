#include <stdio.h>

#define MAX 100

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

int peek() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return -1;  
    }
    return stack[top];
}

int main() {
   

    return 0;
}
