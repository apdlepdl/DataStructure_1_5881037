#include <iostream>

using namespace std;

void floatToIEEE754(float number) {
    unsigned int binary = *(reinterpret_cast<unsigned int*>(&number));

    unsigned int sign = (binary >> 31) & 1; // 부호 (1비트)
    unsigned int exponent = (binary >> 23) & 0xFF;  // 지수 (8비트)
    unsigned int mantissa = binary & 0x7FFFFF;  // 가수 (23비트)

    cout << "부호 (1비트): " << sign << endl;
    cout << "지수 (8비트): " << exponent << endl;
    cout << "가수 (23비트): " << mantissa << endl;
}

int main() {
    float input;

    cout << "실수를 입력하세요: ";  // 실수 입력
    cin >> input;

    floatToIEEE754(input);

    return 0;
}