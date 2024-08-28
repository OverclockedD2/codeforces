#include <iostream>
#include <cmath>

int main() {
    long long n, m, a;
    std::cin >> n >> m >> a;

    long long ans = std::ceil((n / 1.0) / a) * std::ceil((m / 1.0) / a);

    std::cout << ans << '\n';

    return 0;
}