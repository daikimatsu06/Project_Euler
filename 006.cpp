#include <iostream>

int main() {
    int n = 100;
    int sum_of_squares = n * (n + 1) * (2 * n + 1) / 6;
    int squares_of_sum = 5050 * 5050;
    std::cout << squares_of_sum - sum_of_squares << std::endl;
    std::cout << 1.0 * clock() / CLOCKS_PER_SEC << " s." << '\n';
    return 0;
}

// answer: 25164150
// time: 0.012037 s.
