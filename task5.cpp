#include <iostream>
#include <string>

bool is_binary(const std::string& binary) {
    for (char c : binary) {
        if (c != '0' && c != '1') {
            return false;
        }
    }
    return true;
}

int to_decimal(const std::string& binary) {
    int decimal = 0;
    for (char c : binary) {
        decimal = decimal * 2 + (c - '0');
    }
    return decimal;
}

int main() {
    std::string input;
    std::cout << "Введите число в двоичной системе счисления: ";
    std::cin >> input;

    if (is_binary(input)) {
        int decimal = to_decimal(input);
        std::cout << "Десятичное представление: " << decimal << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    return 0;
}