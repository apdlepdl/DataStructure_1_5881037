#include <stdio.h>
#include <string.h>

char changeCase(char ch) {
    if ('A' <= ch && ch <= 'Z') {
        return ch + ('a' - 'A');    // �빮�ڸ� �ҹ��ڷ� ��ȯ
    }
    else if ('a' <= ch && ch <= 'z') {
        return ch - ('a' - 'A');    // �ҹ��ڸ� �빮�ڷ� ��ȯ
    }
}

int main() {
    char input[500];
    printf("���ڿ��� �Է��ϼ���: ");
    fgets(input, sizeof(input), stdin);

    printf("���ڿ��� ����: %lu\n", strlen(input));    // �Է��� ���ڿ� ���� ���

    for (int i = 0; input[i] != '\0'; i++) {
        input[i] = changeCase(input[i]);    // ��ҹ��� ��ȯ
    }

    printf("��ȯ�� ���ڿ�: %s\n", input); // ��ȯ�� ���ڿ� ���

    return 0;
}
