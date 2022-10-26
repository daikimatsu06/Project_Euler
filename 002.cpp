#include <iostream>

int main() {
    int fib1 = 1, fib2 = 1;
    int ans = 0;
    while (true) {
        int fib3 = fib1 + fib2;
        if (fib3 > 4000000) break;
        if (fib3 % 2 == 0) ans += fib3;
        fib1 = fib2;
        fib2 = fib3;
    }
    std::cout << ans << std::endl;
    std::cout << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}

// answer: 4613732
// time: 0.01264
