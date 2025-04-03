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

        printf("�Ǻ���ġ ���� ��� ����(1: ����� 2: ������ 0: ����): ");
        scanf_s("%d", &select);

        if (select == 0) {
            printf("���α׷��� ����Ǿ����ϴ�.\n");
            break;
        }

        printf("n�� �Է��ϼ���: ");
        scanf_s("%d", &n);

        int result;

        if (select == 1) {
            result = fib1(n);
        }
        else if (select == 2) {
            result = fib2(n);
        }
        else {
            printf("�߸��� �����Դϴ�. �ٽ� �õ��ϼ���.\n");
            continue;
        }

        printf("F(%d) = %d\n", n, result);
    }

    return 0;
}
