#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int count(struct node *head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

int main() {
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    head->data = 5;
    head->next = NULL;

    second = (struct node*)malloc(sizeof(struct node));
    second->data = 23;
    second->next = NULL;

    third = (struct node*)malloc(sizeof(struct node));
    third->data = 456;
    third->next = NULL;

    head->next = second;
    second->next = third;

    printf("Number of nodes in the linked list are: %d", count(head));

    return 0;
}