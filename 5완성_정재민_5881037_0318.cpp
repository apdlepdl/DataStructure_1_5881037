#include <iostream>

class PositiveInteger {
private:
    int value;

public:
    explicit PositiveInteger(int v) : value(v > 0 ? v : throw std::invalid_argument("양의 정수만 가능합니다.")) {}

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
    std::cout << "첫 번째 양의 정수를 입력하세요: ";
    std::cin >> num1;
    std::cout << "두 번째 양의 정수를 입력하세요: ";
    std::cin >> num2;

    PositiveInteger a(num1), b(num2);

    std::cout << "덧셈: " << (a + b) << "\n"
        << "뺄셈: " << (a - b) << "\n"
        << "곱셈: " << (a * b) << "\n"
        << "나눗셈: " << (a / b) << std::endl;

    return 0;
}
