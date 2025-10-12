#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* Next;
};

struct node* creating_LL(struct node* start, int count) {
    struct node* tail = start;

    for (int i = 0; i < count; i++) {
        int data;
        printf("Enter the data: ");
        scanf("%d", &data);

        struct node* newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = data;
        newnode->Next = NULL;

        tail->Next = newnode;
        tail = newnode;
    }

    tail->Next = start; 
    return start;
}

void display_LL(struct node* start, int count) {
    struct node* temp = start;
    for (int i = 0; i < count + 1; i++) {
        if (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->Next;
        }
    }
    printf("\n");
}

int main() {
    int data;
    printf("Enter the data: ");
    scanf("%d", &data);

    struct node* start = (struct node*)malloc(sizeof(struct node));
    start->data = data;
    start->Next = NULL;

    int count;
    printf("Enter the count: ");
    scanf("%d", &count);

    start = creating_LL(start, count);
    display_LL(start, count);

    return 0;
}
