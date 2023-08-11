#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insert(int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void printReverse(struct Node *head) {
    if (head == NULL) {
        return;
    }

    printReverse(head->next);
    printf("%d ", head->data);
}

int main() {
    insert(10);
    insert(20);
    insert(30);

    printReverse(head);

    return 0;
}