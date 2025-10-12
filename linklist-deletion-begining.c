#include <stdio.h>
#include <stdlib.h>

struct NODE {
    int data;
    struct NODE* next;
};

struct NODE* Create() {
    int size;
    printf("Enter the size of linked list you want to enter: ");
    scanf("%d", &size);

    if (size <= 0) return NULL;

    struct NODE* head = (struct NODE*)malloc(sizeof(struct NODE));
    printf("Enter the data in the first Node: ");
    scanf("%d", &(head->data));
    head->next = NULL;

    struct NODE* temp = head;

    for (int i = 1; i < size; i++) {
        struct NODE* newnode = (struct NODE*)malloc(sizeof(struct NODE));
        printf("Enter the data: ");
        scanf("%d", &(newnode->data));
        newnode->next = NULL;
        temp->next = newnode;
        temp = temp->next;
    }

    return head;
}

void deleteAtBeginning(struct NODE** head_ref) {
    if (*head_ref == NULL) {
        printf("List is empty, nothing to delete.\n");
        return;
    }

    struct NODE* temp = *head_ref;
    *head_ref = (*head_ref)->next;
    free(temp);
    printf("Node deleted from beginning.\n");
}

void Display(struct NODE* temp) {
    if (temp == NULL) {
        printf("NULL\n");
        return;
    }
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


int main() {
    struct NODE* head = Create();
    printf("The linked list is:\n");
    Display(head);

    deleteAtBeginning(&head);
    printf("After deleting at beginning:\n");
    Display(head);

    
    return 0;
}
