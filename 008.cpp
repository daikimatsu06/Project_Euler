#include <iostream>
#include <vector>

int main() {
    int SIZE = 1000;
    std::vector<int> vec(SIZE);
    for (int i = 0; i < SIZE; ++i) {
        char c; std::cin >> c;
        vec[i] = int(c - '0');
    }
    int length = 13;
    long long ans = -1;
    for (int i = 0; i + length <= SIZE; ++i) {
        long long p = 1;
        for (int j = 0; j < length; ++j) {
            p *= vec[i + j];
        }
        ans = std::max(ans, p);
    }
    std::cout << ans << std::endl; // 23514624000
    std::cout << 1.0 * clock() / CLOCKS_PER_SEC << " s." << '\n'; // 0.014173 s.
    return 0;
}
