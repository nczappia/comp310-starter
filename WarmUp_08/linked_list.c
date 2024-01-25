#include <stdio.h>
#include <stdlib.h>
#include "linked-list.h"

void push(struct LinkedList *llist, int new_data)
{
    //Create new node
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    //Check for memory allocation failure with malloc
    if (new_node == NULL){
	printf("Memory Allocation Failed.\n");
	exit(1);
    }
    //Set new node's data value and next address
    new_node->data = new_data;
    new_node->next = llist->head;
    //Change the assigned head node in the linked list to the new node
    llist->head = new_node; 
}

void deleteNode(struct LinkedList *llist, int key)
{
    //Begin at head node
    struct Node *temp = llist->head, *prev = NULL;
    //Check if head node contains matching value
    if(temp != NULL && temp->data == key){
        llist->head = temp->next;
    }
    //Iterate through list until matching value or end of list
    int count = 1;
    while(temp != NULL && temp->data != key){
 	prev = temp;
	temp = temp->next;
        count++;	
    }
    //If end of list found, do nothing
    if(temp == NULL){
        return;
    }
    //If matching value found, delete the node and reassign next addresses
    prev->next = temp->next;
    free(temp);
}

void printList(struct LinkedList *llist)
{
    struct Node *tnode = llist->head;
    while(tnode != NULL)
    {
        printf("%d ", tnode->data);
	tnode = tnode->next;
    }
}


int main(int argc, char *argv[])
{
    struct LinkedList llist;
    llist.head = NULL;
    
    push(&llist, 7); 
    push(&llist, 1);
    push(&llist, 3);
    push(&llist, 2);

    printf("Creating Linked list is:\n");
    printList(&llist); 

    deleteNode(&llist, 1);
   
    printf("\nLinked List after Deletion of 1: \n"); 
    printList(&llist);  
    printf("\n"); 

    return 0;
}
