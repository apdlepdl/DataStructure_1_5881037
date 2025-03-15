#include <stdio.h>
#include <string.h>

char changeCase(char ch) {
    if ('A' <= ch && ch <= 'Z') {
        return ch + ('a' - 'A');    // 대문자를 소문자로 변환
    }
    else if ('a' <= ch && ch <= 'z') {
        return ch - ('a' - 'A');    // 소문자를 대문자로 변환
    }
}

int main() {
    char input[500];
    printf("문자열을 입력하세요: ");
    fgets(input, sizeof(input), stdin);

    printf("문자열의 길이: %lu\n", strlen(input));    // 입력한 문자열 길이 출력

    for (int i = 0; input[i] != '\0'; i++) {
        input[i] = changeCase(input[i]);    // 대소문자 변환
    }

    printf("변환된 문자열: %s\n", input); // 변환한 문자열 출력

    return 0;
}
