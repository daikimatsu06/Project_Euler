#include <iostream>
#include <vector>

int main() {
    const int N = 500000;
    std::vector<bool> prime(N, true);
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i < N; ++i) {
        if (!prime[i]) continue;
        for (int j = i + i; j < N; j += i) prime[j] = false;
    }
    int cnt = 0;
    for (int i = 0; i < N; ++i) {
        if (prime[i]) {
            ++cnt;
            if (cnt == 10001) {
                std::cout << i << std::endl; // 104743
                std::cout << 1.0 * clock() / CLOCKS_PER_SEC << " s." << '\n'; // 0.074006 s.
            }
        }
    }
}
