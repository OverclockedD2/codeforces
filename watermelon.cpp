#include <iostream>

/*
DESCRIPTION:

We check if the weight is even or odd. If it is even,
we say that it can be divided into two even parts.
If it is odd, we say that it can't be divided into two
even parts. There is also one edge case: w = 2. If the
weight is 2, then the only way we can split the
watermelon is 0 & 2. In theory 0 is also an even
number so this should be correct, but then it wouldn't
be split into two parts. 
*/

int main() {
    short w;
    std::cin >> w;

    if (w == 2 || w % 2 == 1) {
        std::cout << "NO\n";
    }
    else {
        std::cout << "YES\n";
    }

    return 0;
}