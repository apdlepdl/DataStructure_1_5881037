#include <stdio.h>

void print_binary(int n) {
    int i;

    for (i = 31; i >= 0; i--) { // 비트 패턴 출력

        int bit = (n >> i) & 1; // 비트가 1인지 0인지 확인

        printf_s("%d", bit);    // 비트 출력
    }
    printf_s("\n"); // 문장 띄우기
}

int main() {
    int number;

    printf_s("정수를 입력하세요: ");
    scanf_s("%d", &number);     // 정수 입력 받기

    printf_s("입력한 정수의 32비트 표현: ", number);
    print_binary(number);       // 입력된 정수의 비트 패턴 출력

    return 0;
}