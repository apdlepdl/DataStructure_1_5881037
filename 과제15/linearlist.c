#include <stdio.h>
#include <string.h>
#include "linearlist.h"

Tel directory[CAPACITY];
int n = 0;

void add(char* name, char* num) {
    if (n >= CAPACITY) {
        printf("전화번호부가 가득 찼습니다.\n");
        return;
    }

    int i = n - 1;
    while (i >= 0 && strcmp(directory[i].name, name) > 0) {
        directory[i + 1] = directory[i];
        i--;
    }
    strcpy(directory[i + 1].name, name);
    strcpy(directory[i + 1].num, num);
    n++;

    printf("연락처가 추가되었습니다.\n");
}

int search(char* name) {
    for (int i = 0; i < n; i++) {
        if (strcmp(directory[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

void del(char* name) {
    int idx = search(name);
    if (idx == -1) {
        printf("연락처를 찾을 수 없습니다.\n");
        return;
    }
    for (int i = idx; i < n - 1; i++) {
        directory[i] = directory[i + 1];
    }
    n--;
    printf("연락처가 삭제되었습니다.\n");
}

void print_all() {
    printf("\n---- 전체 연락처 ----\n");
    for (int i = 0; i < n; i++) {
        printf("%d. 이름: %s, 전화번호: %s\n", i + 1, directory[i].name, directory[i].num);
    }
    printf("---------------------\n");
}
