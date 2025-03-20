#include <iostream>

class PositiveInteger {
private:
    int value;

public:
    explicit PositiveInteger(int v) : value(v > 0 ? v : throw std::invalid_argument("���� ������ �����մϴ�.")) {}

    PositiveInteger operator+(const PositiveInteger& other) const { return PositiveInteger(value + other.value); }
    PositiveInteger operator-(const PositiveInteger& other) const { return PositiveInteger(value - other.value); }
    PositiveInteger operator*(const PositiveInteger& other) const { return PositiveInteger(value * other.value); }
    PositiveInteger operator/(const PositiveInteger& other) const { return PositiveInteger(value / other.value); }

    friend std::ostream& operator<<(std::ostream& os, const PositiveInteger& obj) {
        return os << obj.value;
    }
};

int main() {

    int num1, num2;
    std::cout << "ù ��° ���� ������ �Է��ϼ���: ";
    std::cin >> num1;
    std::cout << "�� ��° ���� ������ �Է��ϼ���: ";
    std::cin >> num2;

    PositiveInteger a(num1), b(num2);

    std::cout << "����: " << (a + b) << "\n"
        << "����: " << (a - b) << "\n"
        << "����: " << (a * b) << "\n"
        << "������: " << (a / b) << std::endl;

    return 0;
}
