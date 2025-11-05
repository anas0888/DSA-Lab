#include<stdio.h>
#include<stdlib.h>


struct Node {
    int data ;
    struct Node* next;
     
};
struct Node* create(){
    int size;
    printf("enter size of the linklist you want to enter");
    scanf ("%d",&size);
    if (size<= 0)
    return NULL;
    struct Node* head = (struct Node* ) malloc (sizeof(struct Node));
    printf ("Enter the data in the first node");
    scanf ("%d",  &(head ->data));
    head -> next = NULL;
    struct Node* temp = head;

    for ( int i = 1; i < size; i++)
    {
        struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
        printf ("Enter data");
        scanf ("%d", &(newNode -> data));
        newNode ->next = NULL;
        temp -> next = newNode;
        temp  = temp -> next;
    }
    return head;
}
void display(struct Node* temp){
    while (temp != NULL){
        printf ("%d ->", temp -> data);
        temp = temp -> next;
    }
    printf("NULL\n");

}

int main(){
struct Node* head = create();
printf ("the linklist is ");
display (head);
return 0;

}