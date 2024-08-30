#include <iostream>

int main() {
    int n, k;
    std::cin >> n >> k;

    int c, x, counter = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> c;

        if (i == k - 1) {
            if (c > 0) counter++;
            for (int j = i + 1; j < n; j++) {
                std::cin >> x;
                if (c != x) {
                    for (int m = j + 1; m < n; m++) std::cin >> x;
                    break;
                }
                if (x > 0) counter++;
            }
            break;
        }
        if (c > 0) counter++;
    }

    std::cout << counter << '\n';

    return 0;
}