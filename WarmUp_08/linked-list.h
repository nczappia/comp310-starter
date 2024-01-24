#ifndef LINKED_LIST_H
#define LINKED_LIST_H


struct linkedlist {
    struct node {
        int data;
        struct node *next;
    }
    node *head;
}

void push(int new_data);
void deleteNode(int key);
void printList();

#endif 
