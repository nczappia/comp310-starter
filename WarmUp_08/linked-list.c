#include <stdio.h>
#include <stdlib.h>
#include "linked-list.h"

void push(struct LinkedList *llist, int new_data)
{
    //Create new node
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));

    if (new_node == NULL){
	printf("Memory Allocation Failed.\n");
	exit(1);
    }

    new_node->data = new_data;
    new_node->next = llist->head;
    //Insert node at beginning of list
    //Set next to current head, set head to new node
    llist->head = &new_node; 
}

void deleteNode(int key)
{

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


int main()
{
    struct LinkedList llist;
    
    struct Node firstNode = {5, NULL};
    llist.head = &firstNode;
    
    push(&llist, 8);
    push(&llist, 10);

    printList(&llist);    
}
