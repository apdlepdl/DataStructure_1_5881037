#pragma once

#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
    int data;
    struct ListNode* link;
} listNode;

typedef struct LinkedList_h {
    listNode* tail;
} LinkedList_h;

LinkedList_h* createLinkedList_h();
extern void insertFirstNode(LinkedList_h* CL, int data);
extern void insertLastNode(LinkedList_h* CL, int data);
extern void insertMiddleNode(LinkedList_h* CL, int target, int data);
extern void printList(LinkedList_h* CL);
extern void printHeadTail(LinkedList_h* CL);
extern void freeList(LinkedList_h* CL);