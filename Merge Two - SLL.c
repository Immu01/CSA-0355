#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *head1 = NULL;
struct Node *head2 = NULL;
void insert(struct Node **head, int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}
void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void reverse(struct Node **head) {
    struct Node *prev = NULL;
    struct Node *curr = *head;
    struct Node *next = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head = prev;
}
int main() {
    insert(&head1, 10);
    insert(&head1, 20);
    insert(&head1, 30);

    insert(&head2, 40);
    insert(&head2, 50);
    insert(&head2, 60);

    printList(head1);
    printList(head2);

    reverse(&head1);
    reverse(&head2);

    printList(head1);
    printList(head2);

    return 0;
}