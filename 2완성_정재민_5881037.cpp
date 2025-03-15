#include <iostream>

using namespace std;

void floatToIEEE754(float number) {
    unsigned int binary = *(reinterpret_cast<unsigned int*>(&number));

    unsigned int sign = (binary >> 31) & 1; // ��ȣ (1��Ʈ)
    unsigned int exponent = (binary >> 23) & 0xFF;  // ���� (8��Ʈ)
    unsigned int mantissa = binary & 0x7FFFFF;  // ���� (23��Ʈ)

    cout << "��ȣ (1��Ʈ): " << sign << endl;
    cout << "���� (8��Ʈ): " << exponent << endl;
    cout << "���� (23��Ʈ): " << mantissa << endl;
}

int main() {
    float input;

    cout << "�Ǽ��� �Է��ϼ���: ";  // �Ǽ� �Է�
    cin >> input;

    floatToIEEE754(input);

    return 0;
}