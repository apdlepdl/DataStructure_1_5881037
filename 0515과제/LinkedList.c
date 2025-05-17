#include "LinkedList.h"

LinkedList_h* createLinkedList_h() {
    LinkedList_h* CL = (LinkedList_h*)malloc(sizeof(LinkedList_h));
    CL->tail = NULL;
    return CL;
}

void insertFirstNode(LinkedList_h* CL, int data) {
    listNode* newNode = (listNode*)malloc(sizeof(listNode));
    newNode->data = data;

    if (CL->tail == NULL) {
        newNode->link = newNode;
        CL->tail = newNode;
    }
    else {
        newNode->link = CL->tail->link;
        CL->tail->link = newNode;
    }
}

void insertLastNode(LinkedList_h* CL, int data) {
    listNode* newNode = (listNode*)malloc(sizeof(listNode));
    newNode->data = data;

    if (CL->tail == NULL) {
        newNode->link = newNode;
        CL->tail = newNode;
    }
    else {
        newNode->link = CL->tail->link;
        CL->tail->link = newNode;
        CL->tail = newNode;
    }
}

void insertMiddleNode(LinkedList_h* CL, int target, int data) {
    if (CL->tail == NULL) {
        printf("기존에 입력된 값이 없습니다.\n");
        return;
    }

    listNode* current = CL->tail->link;
    do {
        if (current->data == target) {
            listNode* newNode = (listNode*)malloc(sizeof(listNode));
            newNode->data = data;
            newNode->link = current->link;
            current->link = newNode;

            if (current == CL->tail) {
                CL->tail = newNode;
            }
            return;
        }
        current = current->link;
    } while (current != CL->tail->link);

    printf("%d는 리스트에 없는 값입니다.\n", target);
}

void printList(LinkedList_h* CL) {
    if (CL->tail == NULL) {
        printf("리스트가 비었습니다.\n");
        return;
    }

    listNode* curr = CL->tail->link;
    do {
        printf("%d -> ", curr->data);
        curr = curr->link;
    } while (curr != CL->tail->link);
    printf("(head)\n");
}

void printHeadTail(LinkedList_h* CL) {
    if (CL->tail == NULL) {
        printf("리스트가 비었습니다.\n");
        return;
    }
    printf("Head: %d\n", CL->tail->link->data);
    printf("Tail: %d\n", CL->tail->data);
}

void freeList(LinkedList_h* CL) {
    if (CL->tail == NULL) {
        free(CL);
        return;
    }

    listNode* curr = CL->tail->link;
    listNode* next;
    do {
        next = curr->link;
        free(curr);
        curr = next;
    } while (curr != CL->tail->link);

    free(CL);
}