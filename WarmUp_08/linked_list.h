#ifndef LINKED_LIST_H
#define LINKED_LIST_H


struct LinkedList {
    struct Node {
        int data;
        struct Node *next;
    } *head;
};

#endif 
