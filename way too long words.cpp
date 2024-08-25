#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    std::string word;
    while (n-- > 0) {
        std::cin >> word;
        if (word.length() > 10) {
            std::cout << word[0] << (word.length() - 2) << word[word.length() - 1] << '\n';
        }
        else {
            std::cout << word << '\n';
        }
    }

    return 0;
}