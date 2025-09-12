#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
    struct node* prev;
};

struct node* head = NULL;
struct node* tail = NULL;

int IsEmpty() {
    return head == NULL;
}

void InsertionAtFront(int value) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = head;
    newnode->prev = NULL;
    if (head != NULL) {
        head->prev = newnode;
    }
    head = newnode;

    if (tail == NULL) {
        tail = newnode;
    }
}

void InsertionAtRear(int value) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    newnode->prev = tail;

    if (tail != NULL) {
        tail->next = newnode;
    }
    tail = newnode;

    if (head == NULL) {
        head = newnode;
    }
}

void InsertionAtPosition(int value, int pos) {
    if (pos <= 1 || IsEmpty()) {
        InsertionAtFront(value);
        return;
    }

    struct node* temp = head;
    int i;
    for (i = 1; i < pos - 1 && temp->next != NULL; i++) {
        temp = temp->next;
    }

    if (temp->next == NULL) { // insert at rear
        InsertionAtRear(value);
    } else {
        struct node* newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = value;

        newnode->next = temp->next;
        newnode->prev = temp;

        temp->next->prev = newnode;
        temp->next = newnode;
    }
}

// ================= Deletion Functions =================

void DeletionAtFront() {
    if (IsEmpty()) {
        printf("List is empty, nothing to delete\n");
        return;
    }

    struct node* temp = head;
    head = head->next;

    if (head != NULL) {
        head->prev = NULL;
    } else {
        tail = NULL; // list became empty
    }

    printf("Deleted %d from front\n", temp->data);
    free(temp);
}

void DeletionAtRear() {
    if (IsEmpty()) {
        printf("List is empty, nothing to delete\n");
        return;
    }

    struct node* temp = tail;
    tail = tail->prev;

    if (tail != NULL) {
        tail->next = NULL;
    } else {
        head = NULL; // list became empty
    }

    printf("Deleted %d from rear\n", temp->data);
    free(temp);
}

void DeletionAtPosition(int pos) {
    if (IsEmpty()) {
        printf("List is empty, nothing to delete\n");
        return;
    }

    if (pos <= 1) {
        DeletionAtFront();
        return;
    }

    struct node* temp = head;
    int i;
    for (i = 1; i < pos && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position %d not found\n", pos);
        return;
    }

    if (temp->next == NULL) { // last node
        DeletionAtRear();
        return;
    }

    // middle node
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

    printf("Deleted %d from position %d\n", temp->data, pos);
    free(temp);
}

// ======================================================

void Display() {
    struct node* temp = head;
    printf("List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    InsertionAtFront(10);
    InsertionAtRear(20);
    InsertionAtRear(30);
    InsertionAtPosition(15, 2);  
    InsertionAtPosition(5, 1);   
    InsertionAtPosition(40, 10); 

    Display();

    DeletionAtFront();
    Display();

    DeletionAtRear();
    Display();

    DeletionAtPosition(2);
    Display();

    return 0;
}
