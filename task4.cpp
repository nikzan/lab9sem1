#include <iostream>
#include <string>

bool is_punct(char c) {
    return c == '!' || c == '?' || c == '.' || c == ',' || c == ':' || c == ';' || c == '"' || c == '-';
}

int main() {
    std::string input = "Example : string o_0 with -_- punctuation marks!";
    int char_count[256] = {0}; // 0 - 255 ASCII

    for (char c : input) {
        if (!is_punct(c)) {
            char_count[static_cast<unsigned char>(c)]++;
        }
    }

    int unique_count = 0;
    std::cout << "Символы: ";
    for (int i = 0; i < 256; ++i) {
        if (char_count[i] > 0) {
            std::cout << static_cast<char>(i) << ' ';
            unique_count++;
        }
    }
    std::cout << std::endl;
    std::cout << "Количество различных символов: " << unique_count << std::endl;

    return 0;
}