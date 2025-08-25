#include <stdio.h>
#include <string.h>
#define MAX 100

char queue1[MAX], queue2[MAX];
int front1 = -1, rear1 = -1;
int front2 = -1, rear2 = -1;

// Enqueue
void enqueue(char queue[], int *front, int *rear, char c) {
    if (*rear == MAX - 1) {
        printf("Queue Overflow!\n");
    } else {
        if (*front == -1) *front = 0;
        queue[++(*rear)] = c;
    }
}

// Dequeue
char dequeue(char queue[], int *front, int *rear) {
    if (*front == -1 || *front > *rear) {
        return '\0';
    } else {
        return queue[(*front)++];
    }
}

int main() {
    char str[MAX];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    // Fill queue1 (front order) and queue2 (reverse order)
    for (int i = 0; i < len; i++) {
        enqueue(queue1, &front1, &rear1, str[i]);       // normal order
        enqueue(queue2, &front2, &rear2, str[len - 1 - i]); // reverse order
    }

    // Compare both queues
    int palindrome = 1;
    for (int i = 0; i < len; i++) {
        char c1 = dequeue(queue1, &front1, &rear1);
        char c2 = dequeue(queue2, &front2, &rear2);
        if (c1 != c2) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome) {
        printf("The string is a Palindrome\n");
    } else {
        printf("The string is NOT a Palindrome\n");
    }

    return 0;
}
