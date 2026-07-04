#include <stdio.h>
#include <stdlib.h>
struct Stack {
    int *arr;
    int top;
    int capacity;
};
struct Stack* createStack(int capacity) {
    struct Stack* s = (struct Stack*)malloc(sizeof(struct Stack));
    s->capacity = capacity;
    s->top = -1;
    s->arr = (int*)malloc(capacity * sizeof(int));
    return s;
}
int isFull(struct Stack* s) {
    return s->top == s->capacity - 1;
}
int isEmpty(struct Stack* s) {
    return s->top == -1;
}
void push(struct Stack* s, int x) {
    if (isFull(s)) {
        printf("Overflow hoise\n");  // 🔥 ekhane print
        return;
    }
    s->arr[++s->top] = x;
    printf("Pushed %d\n", x);
}
int pop(struct Stack* s) {
    if (isEmpty(s)) {
        printf("Underflow hoise\n");
        return -1;
    }
    return s->arr[s->top--];
}
void display(struct Stack* s) {
    if (isEmpty(s)) {
        printf("Stack empty\n");
        return;
    }
    for (int i = s->top; i >= 0; i--) {
        printf("%d ", s->arr[i]);
    }
    printf("\n");
}
int main() {
    struct Stack* s = createStack(2);
    push(s, 10);
    push(s, 20);
    push(s, 30);
    display(s);

    return 0;
}
