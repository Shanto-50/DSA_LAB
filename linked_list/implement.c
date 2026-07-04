#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* head = NULL;
void insert(int x) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = head;
    head = newNode;
    printf("Inserted %d\n", x);
}
void delete() {
    if (head == NULL) {
        printf("List empty\n");
        return;
    }
    struct Node* temp = head;
    head = head->next;
    printf("Deleted %d\n", temp->data);
    free(temp);
}
void display() {
    if (head == NULL) {
        printf("List empty\n");
        return;
    }
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    insert(10);
    insert(20);
    insert(30);
    display();
    delete();
    display();
    return 0;
}
