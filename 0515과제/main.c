#include "LinkedList.h"

int main() {
    LinkedList_h* list = createLinkedList_h();
    int choice, data, target;

    while (1) {
        printf("\nMenu\n");
        printf("1) InsertFirst\n");
        printf("2) InsertLast\n");
        printf("3) InsertMiddle\n");
        printf("7) Print Head/Tail\n");
        printf("0) Program Stop\n");
        printf("Select Menu �� ");
        scanf_s("%d", &choice);

        switch (choice) {
        case 1:
            printf("������ �Է�: ");
            scanf_s("%d", &data);
            insertFirstNode(list, data);
            printList(list);
            break;
        case 2:
            printf("������ �Է�: ");
            scanf_s("%d", &data);
            insertLastNode(list, data);
            printList(list);
            break;
        case 3:
            printf("������ �� �Է�: ");
            scanf_s("%d", &target);
            printf("������ �Է�: ");
            scanf_s("%d", &data);
            insertMiddleNode(list, target, data);
            printList(list);
            break;
        case 7:
            printHeadTail(list);
            break;
        case 0:
            freeList(list);
            printf("����\n");
            return 0;
        default:
            printf("�ٽ� �Է��ϼ���.\n");
        }
    }

    return 0;
}