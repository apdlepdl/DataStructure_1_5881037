#include <stdio.h>

#define MAX 100

typedef struct {
    int row;
    int col;
    int value;
} Element;

Element list[MAX];
int size = 0;

void insert(int r, int c, int v) {
    list[size].row = r;
    list[size].col = c;
    list[size].value = v;
    size++;
}

int find(int r, int c) {
    for (int i = 0; i < size; i++) {
        if (list[i].row == r && list[i].col == c)
            return i;
    }
    return -1;
}

int main() {
    int r, c, v;

    printf("행렬을 입력하시오 (-1 입력 시 입력 종료)\n");
    while (1) {
        scanf_s("%d", &r);
        if (r == -1) break;
        scanf_s("%d %d", &c, &v);
        insert(r, c, v);
    }

    printf("행렬을 입력하시오 (-1 입력 시 입력 종료)\n");
    while (1) {
        scanf_s("%d", &r);
        if (r == -1) break;
        scanf_s("%d %d", &c, &v);

        int idx = find(r, c);
        if (idx != -1)
            list[idx].value += v;
        else
            insert(r, c, v);
    }

    printf("두 행렬의 합\n");
    for (int i = 0; i < size; i++) {
        printf("[%d] %d, %d, %d\n", i, list[i].row, list[i].col, list[i].value);
    }

    return 0;
}
