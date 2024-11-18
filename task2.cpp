#include <iostream>
#include <string>

int main() {
    std::string input = "Пример <строки>*()с?<символами>";
    std::string output;

    for (char c : input) {
        if (c == '<') {
            output += "begin";
        } else if (c == '>') {
            output += "end";
        } else {
            output += c;
        }
    }

    std::cout << "Результат: " << output << std::endl;
    return 0;
}