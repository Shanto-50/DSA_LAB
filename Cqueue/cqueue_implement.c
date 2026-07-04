#include <stdio.h>
#include <stdlib.h>
struct CQueue {
    int *arr;
    int front;
    int rear;
    int capacity;
};
struct CQueue* createQueue(int capacity) {
    struct CQueue* q = (struct CQueue*)malloc(sizeof(struct CQueue));
    q->capacity = capacity;
    q->front = -1;
    q->rear = -1;
    q->arr = (int*)malloc(capacity * sizeof(int));
    return q;
}
int isFull(struct CQueue* q) {
    return (q->rear + 1) % q->capacity == q->front;
}
int isEmpty(struct CQueue* q) {
    return q->front == -1;
}
void enqueue(struct CQueue* q, int x) {
    if (isFull(q)) {
        printf("Overflow hoise\n");
        return;
    }
    if (isEmpty(q)) {
        q->front = 0;
    }
    q->rear = (q->rear + 1) % q->capacity;
    q->arr[q->rear] = x;

    printf("Enqueued %d\n", x);
}
int dequeue(struct CQueue* q) {
    if (isEmpty(q)) {
        printf("Underflow hoise\n");
        return -1;
    }
    int val = q->arr[q->front];
    if (q->front == q->rear) {
        q->front = q->rear = -1;
    } else {
        q->front = (q->front + 1) % q->capacity;
    }

    return val;
}
void display(struct CQueue* q) {
    if (isEmpty(q)) {
        printf("Queue empty\n");
        return;
    }
    int i = q->front;
    while (1) {
        printf("%d ", q->arr[i]);
        if (i == q->rear) break;
        i = (i + 1) % q->capacity;
    }
    printf("\n");
}
int main() {
    struct CQueue* q = createQueue(3);

    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    dequeue(q);
    enqueue(q, 40); 
    display(q);
    return 0;
}
