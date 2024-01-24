#ifndef LINKED_LIST_H
#define LINKED_LIST_H


struct LinkedList {
    struct Node {
        int data;
        struct node *next;
    } *head;
};

void push(int new_data);
void deleteNode(int key);
void printList();

#endif 
