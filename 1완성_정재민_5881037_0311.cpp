#include <stdio.h>

void print_binary(int n) {
    int i;

    for (i = 31; i >= 0; i--) { // ��Ʈ ���� ���

        int bit = (n >> i) & 1; // ��Ʈ�� 1���� 0���� Ȯ��

        printf_s("%d", bit);    // ��Ʈ ���
    }
    printf_s("\n"); // ���� ����
}

int main() {
    int number;

    printf_s("������ �Է��ϼ���: ");
    scanf_s("%d", &number);     // ���� �Է� �ޱ�

    printf_s("�Է��� ������ 32��Ʈ ǥ��: ", number);
    print_binary(number);       // �Էµ� ������ ��Ʈ ���� ���

    return 0;
}