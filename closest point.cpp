#include <iostream>

int main() {
    int n, a, *nums = new int[40];
    std::cin >> n;

    while (n-- > 0) {
        std::cin >> a;
        for (int i = 0; i < a; i++) {
            std::cin >> nums[i];
        }

        if (a == 1) {
            std::cout << "YES\n";
        }
        else if (a == 2) {
            if (nums[1] - nums[0] == 1) {
                std::cout << "NO\n";
            }
            else {
                std::cout << "YES\n";
            }
        }
        else {
            std::cout << "NO\n";
        }
    }
    
    delete[] nums;
}