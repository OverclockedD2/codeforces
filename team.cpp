#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int a, b, c, n_sol = 0;
    while (n-- > 0) {
        std::cin >> a >> b >> c;
        if (a + b + c > 1) {
            n_sol++;
        }
    }

    std::cout << n_sol << '\n';

    return 0;
}