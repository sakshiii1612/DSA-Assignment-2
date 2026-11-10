#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = 0, rear = -1;

void enqueue(int x) {
    if (rear == SIZE - 1)
        printf("Queue Overflow\n");
    else
        queue[++rear] = x;
}

void dequeue() {
    if (front > rear)
        printf("Queue Underflow\n");
    else
        printf("Deleted: %d\n", queue[front++]);
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    dequeue();
    dequeue();

    return 0;
}
