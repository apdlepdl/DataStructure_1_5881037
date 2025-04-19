#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "linearlist.h"

int main() {
    int choice;
    char name[20], num[20];

    while (1) {
        printf("\n==== 전화번호부 메뉴 ====\n");
        printf("1. 연락처 추가\n");
        printf("2. 연락처 삭제\n");
        printf("3. 연락처 검색\n");
        printf("4. 전체 연락처 출력\n");
        printf("0. 종료\n");
        printf("메뉴를 선택하세요: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("이름을 입력하세요: ");
            scanf("%s", name);
            printf("전화번호를 입력하세요: ");
            scanf("%s", num);
            add(name, num);
            break;
        case 2:
            printf("삭제할 이름을 입력하세요: ");
            scanf("%s", name);
            del(name);
            break;
        case 3:
            printf("검색할 이름을 입력하세요: ");
            scanf("%s", name);
            int idx;
            idx = search(name);
            if (idx != -1) {
                printf("이름: %s, 전화번호: %s\n", directory[idx].name, directory[idx].num);
            } else {
                printf("연락처를 찾을 수 없습니다.\n");
            }
            break;
        case 4:
            print_all();
            break;
        case 0:
            printf("프로그램을 종료합니다.\n");
            return 0;
        default:
            printf("잘못된 선택입니다. 다시 입력하세요.\n");
        }
    }

    return 0;
}
