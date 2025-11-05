#include <stdio.h>
#define SIZE 5

int cq[SIZE];
int front = -1, rear = -1;

void enqueue(int val) {
    if ((front == 0 && rear == SIZE - 1) || (front == rear + 1))
        printf("Queue Overflow\n");
    else {
        if (front == -1) front = 0;
        rear = (rear + 1) % SIZE;
        cq[rear] = val;
    }
}

void dequeue() {
    if (front == -1) printf("Queue Underflow\n");
    else {
        printf("Dequeued: %d\n", cq[front]);
        if (front == rear) front = rear = -1;
        else front = (front + 1) % SIZE;
    }
}

void display() {
    if (front == -1) printf("Queue is empty\n");
    else {
        int i = front;
        printf("Circular Queue: ");
        while (1) {
            printf("%d ", cq[i]);
            if (i == rear) break;
            i = (i + 1) % SIZE;
        }
        printf("\n");
    }
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    display();
    dequeue();
    display();
    enqueue(4);
    enqueue(5);
    display();
    return 0;
}
