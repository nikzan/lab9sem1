#include <iostream>
#include <string>

int main() {
    std::string input = "Какая боль    пять ноль";
    int word_count = 0;
    std::string temp;
    bool in_word = false;

    for (char c : input) {
        if (std::isspace(static_cast<unsigned char>(c))) {
            if (in_word) {
                word_count++;
                in_word = false;
            }
        } else {
            in_word = true;
        }
    }

    if (in_word) {
        ++word_count;
    }

    std::cout << "Количество слов в строке: " << word_count << std::endl;
    return 0;
}