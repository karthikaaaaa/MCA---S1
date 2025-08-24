#include <stdio.h>
#include <string.h>
#define MAX 100

char stack[MAX];
int top = -1;

// Push operation
void push(char c) {
    if (top == MAX - 1) {
        printf("Stack Overflow!\n");
    } else {
        stack[++top] = c;
    }
}

// Pop operation
char pop() {
    if (top == -1) {
        printf("Stack Underflow!\n");
        return '\0';
    } else {
        return stack[top--];
    }
}

int main() {
    char str[MAX], reversed[MAX];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Push each character
    for (i = 0; str[i] != '\0'; i++) {
        push(str[i]);
    }

    // Pop characters into reversed string
    int j = 0;
    while (top != -1) {
        reversed[j++] = pop();
    }
    reversed[j] = '\0';

    printf("Reversed string: %s\n", reversed);

    return 0;
}
