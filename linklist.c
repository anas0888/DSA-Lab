#include <stdio.h>
#include <stdlib.h>

struct NODE {
    int data;
    struct NODE* next;
};

// Function to create a linked list
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

// Function to display linked list
void Display(struct NODE* temp) {
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
    return 0;
}
