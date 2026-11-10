#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void push(int x) {
    struct Node *newNode = malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Memory full\n");
        return;
    }

    newNode->data = x;
    newNode->next = top;
    top = newNode;
}

void pop() {
    if (top == NULL) {
        printf("Stack Underflow\n");
        return;
    }

    struct Node *temp = top;
    printf("Deleted: %d\n", top->data);
    top = top->next;
    free(temp);
}

int main() {
    push(10);
    push(20);
    push(30);

    pop();
    pop();

    return 0;
}