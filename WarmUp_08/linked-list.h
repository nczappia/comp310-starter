#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct node {
    int data;
    node *next;
};

struct linkedlist {
    node *head;
};

void push(int new_data);
void deleteNode(int key);
void printList();

#endif 
