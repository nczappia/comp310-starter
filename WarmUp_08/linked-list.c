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
    printf("Node Address: %p\n", (void*)new_node);
    printf("Made through\n");
}

void deleteNode(struct LinkedList *llist, int key)
{
    //Begin at head node
    printf("Deleting...\n");
    struct Node *temp = llist->head, *prev = NULL;
    printf("Temp Address: %p\tPrevious Address: %p\n", (void*)temp, (void*)prev);
    //Check if head node contains matching value
    if(temp != NULL && temp->data == key){
        llist->head = temp->next;
    }
    //Iterate through list until matching value or end of list
    int count = 1;
    while(temp != NULL){
	if(temp->data == key){
	    printf("Found\n");
	    break;
	}
        printf("Temp: %p\tData: %d\tKey: %d\t\n", temp, temp->data, key);
 	prev = temp;
	temp = temp->next;
        printf("Iteration %d:\n", count);
     	printf("Temp Address: %p\tPrevious Address: %p\n", (void*)temp, (void*)prev);
	printf("Finished Iteration %d\n", count);
        count++;	
        printf("Up next...\nTemp: %p\tData: %d\tKey: %d\t\n", temp, temp->data, key);
    }
    printf("Found 8\n");
    //If end of list found, do nothing
    if(temp == NULL){
        return;
    }
    printf("Through NULL check\n");
    //If matching value found, delete the node and reassign next addresses
    prev->next = temp->next;
    printf("8 removed\n");
    free(temp);
}

void printList(struct LinkedList *llist)
{
    printf("IN"); 
    struct Node *tnode = llist->head;
    while(tnode->next != NULL)
    {
        printf("%d ", tnode->data);
        tnode = tnode->next;
    }
    printf("\n");    
}


int main()
{
    struct LinkedList llist;
    
    printf("Starting...\n");
    push(&llist, 5); 
    push(&llist, 8);
    push(&llist, 10);
    printf("Made it\n");    
    printList(&llist); 

    deleteNode(&llist, 8);
    
    //printList(&llist);   
}
