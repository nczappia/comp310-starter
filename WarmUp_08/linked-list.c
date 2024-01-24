#include <stdio.h>

#include "linked-list.h"

void push(int new_data)
{

}

void deleteNode(int key)
{

}

void printList(struct LinkedList *llist)
{
    struct Node *tnode = llist->head;
   
    while(tnode->next != NULL)
    {
        printf("%d ", tnode->data);
        tnode = tnode->next;
    }	
}


int main()
{
    struct LinkedList llist = {NULL};

    printList(&llist);    
}
