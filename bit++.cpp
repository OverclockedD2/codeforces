#include <iostream>
#include <string>

int main() {
    int n, x = 0;
    std::cin >> n;

    std::string line;
    while (n-- > 0) {
        std::cin >> line;

        if (line[1] == '-') {
            x--;
        }
        else {
            x++;
        }
    }

    std::cout << x << '\n';

    return 0;
}