#include <stdio.h>
#include <stdlib.h>

int size = 0;

// Complete struct definition
struct node {
    int data;
    struct node* next;
};

// global head and tail
struct node* head = NULL;
struct node* tail = NULL;

// Insert at beginning
void insertAtFirst(int val) {
    struct node* newNode = malloc(sizeof(struct node)); 
    newNode->data = val;
    newNode->next = head;
    head = newNode;

    if (tail == NULL) {
        tail = head;
    }

    size++;
}

// Print list
void printList() {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    insertAtFirst(10);
    insertAtFirst(20);
    insertAtFirst(30);

    printList();
    printf("Size = %d\n", size);
    return 0;
}
