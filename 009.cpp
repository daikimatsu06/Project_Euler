#include <iostream>

int main() {
    for (int a = 2; a < 1000; ++a) {
        for (int b = a + 1; b < 1000; ++b) {
            int c = 1000 - a - b;
            if (a * a + b * b == c * c) {
                std::cout << a * b * c << std::endl; // 31875000
                std::cout << 1.0 * clock() / CLOCKS_PER_SEC << " s." << '\n'; // 0.013152 s.
                return 0;
            }
        }
    }
    return 0;
}
