#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void push() {
    int element;
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter element to push: ");
    scanf("%d", &element);
    newNode->data = element;
    newNode->next = top;
    top = newNode;
    printf("Element pushed successfully.\n");
}

void pop() {
    if (top == NULL) {
        printf("Error: Stack Underflow.\n");
        return;
    }
    struct Node *temp = top;
    printf("Popped element: %d\n", temp->data);
    top = top->next;
    free(temp);
}

void peek() {
    if (top == NULL) {
        printf("Error: Stack is empty.\n");
        return;
    }
    printf("Top element: %d\n", top->data);
}

void display() {
    if (top == NULL) {
        printf("Stack is empty.\n");
        return;
    }
    struct Node *temp = top;
    printf("Stack elements (top to bottom): ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int choice;
    while (1) {
        printf("\nStack ADT (Linked List) Menu:\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (cho
