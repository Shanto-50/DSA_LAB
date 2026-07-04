#include <stdio.h>
#include <stdlib.h>
struct Queue {
    int *arr;
    int front;
    int rear;
    int capacity;
};
struct Queue* createQueue(int capacity) {
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->capacity = capacity;
    q->front = 0;
    q->rear = -1;
    q->arr = (int*)malloc(capacity * sizeof(int));
    return q;
}
int isFull(struct Queue* q) {
    return q->rear == q->capacity - 1;
}
int isEmpty(struct Queue* q) {
    return q->front > q->rear;
}
void enqueue(struct Queue* q, int x) {
    if (isFull(q)) {
        printf("Overflow hoise\n");
        return;
    }
    q->arr[++q->rear] = x;
    printf("Enqueued %d\n", x);
}
int dequeue(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Underflow hoise\n");
        return -1;
    }
    return q->arr[q->front++];
}
void display(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue empty\n");
        return;
    }
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d ", q->arr[i]);
    }
    printf("\n");
}
int main() {
    struct Queue* q = createQueue(2);
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30); 
    display(q);
    printf("Dequeued: %d\n", dequeue(q));
    display(q);
    return 0;
}
