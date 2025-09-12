#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* head = NULL;

// Insert at end
void InsertAtEnd(int value) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;

    if (head == NULL) { // first node
        head = newnode;
        newnode->next = head;  
        return;
    }

    struct node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }

    temp->next = newnode;
    newnode->next = head;
}

// Insert at front
void InsertAtFront(int value) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;

    if (head == NULL) {
        head = newnode;
        newnode->next = head;
        return;
    }

    struct node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }

    newnode->next = head;
    temp->next = newnode;
    head = newnode;
}

// Insert at arbitrary position (1-based index)
void InsertAtPosition(int value, int pos) {
    if (pos <= 1 || head == NULL) {
        InsertAtFront(value);
        return;
    }

    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;

    struct node* temp = head;
    int i;
    for (i = 1; i < pos - 1 && temp->next != head; i++) {
        temp = temp->next;
    }

    newnode->next = temp->next;
    temp->next = newnode;
}

// Delete from front
void DeleteAtFront() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    if (head->next == head) { 
        printf("Deleted %d\n", head->data);
        free(head);
        head = NULL;
        return;
    }

    struct node* temp = head;
    struct node* last = head;

    while (last->next != head) {
        last = last->next;
    }

    printf("Deleted %d\n", head->data);
    head = head->next;
    last->next = head;
    free(temp);
}

// Delete from end
void DeleteAtEnd() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    if (head->next == head) { 
        printf("Deleted %d\n", head->data);
        free(head);
        head = NULL;
        return;
    }

    struct node* temp = head;
    struct node* prev = NULL;

    while (temp->next != head) {
        prev = temp;
        temp = temp->next;
    }

    printf("Deleted %d\n", temp->data);
    prev->next = head;
    free(temp);
}

// Delete at arbitrary position
void DeleteAtPosition(int pos) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    if (pos <= 1) {
        DeleteAtFront();
        return;
    }

    struct node* temp = head;
    struct node* prev = NULL;
    int i;
    for (i = 1; i < pos && temp->next != head; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (i < pos) {
        printf("Position %d not found\n", pos);
        return;
    }

    if (temp->next == head && prev != NULL) { 
        DeleteAtEnd();
        return;
    }

    printf("Deleted %d from position %d\n", temp->data, pos);
    prev->next = temp->next;
    free(temp);
}

// Display list
void Display() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct node* temp = head;
    printf("Circular List: ");
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

int main() {
    InsertAtEnd(10);
    InsertAtEnd(20);
    InsertAtEnd(30);
    Display();   // 10 20 30

    InsertAtFront(5);
    Display();   // 5 10 20 30

    InsertAtPosition(15, 3); 
    Display();   // 5 10 15 20 30

    DeleteAtFront();
    Display();   // 10 15 20 30

    DeleteAtEnd();
    Display();   // 10 15 20

    DeleteAtPosition(2);
    Display();   // 10 20

    return 0;
}
