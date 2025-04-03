#include <stdio.h>
#include <stdlib.h>

int fib1(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fib1(n - 1) + fib1(n - 2);
}

int fib2(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    int a = 0, b = 1, next;
    for (int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main() {
    int n, select;

    while (1) {

        printf("피보나치 수열 방법 선택(1: 재귀적 2: 순차적 0: 종료): ");
        scanf_s("%d", &select);

        if (select == 0) {
            printf("프로그램이 종료되었습니다.\n");
            break;
        }

        printf("n을 입력하세요: ");
        scanf_s("%d", &n);

        int result;

        if (select == 1) {
            result = fib1(n);
        }
        else if (select == 2) {
            result = fib2(n);
        }
        else {
            printf("잘못된 선택입니다. 다시 시도하세요.\n");
            continue;
        }

        printf("F(%d) = %d\n", n, result);
    }

    return 0;
}
