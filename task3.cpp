#include <iostream>
#include <cctype>

bool is_latin_or_not(char c) {
    return (c >= U'A' && c <= U'Z') || (c >= U'a' && c <= U'z') ||
           (c >= U'А' && c <= U'Я') || (c >= U'а' && c <= U'я');
} // сравнение делаем через Unicode-коды, чтобы учитывать и кириллицу (иначе не робит с 'Я')

bool is_digit(char c) {
    return std::isdigit(static_cast<unsigned char>(c));
}

bool is_lower(char c) {
    return std::islower(static_cast<unsigned char>(c));
}

bool is_upper(char c) {
    return std::isupper(static_cast<unsigned char>(c));
}

bool is_special(char c) {
    return c >= 0 && c <= 32;
}

int main() {
    char c = U'Z';
    // std::cin >> c;

    std::cout << "Латиница или кириллица: " << std::boolalpha << is_latin_or_not(c) << std::endl;
    std::cout << "Цифра: " << std::boolalpha << is_digit(c) << std::endl;
    std::cout << "Строчная буква: " << std::boolalpha << is_lower(c) << std::endl;
    std::cout << "Прописная буква: " << std::boolalpha << is_upper(c) << std::endl;
    std::cout << "Специальный символ: " << std::boolalpha << is_special(c) << std::endl;

    return 0;
}