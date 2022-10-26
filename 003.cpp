#include <iostream>

int main() {
    long long N = 600851475143;
    long long ans = -1;
    for (long long i = 2; i * i <= N; ++i) {
        if (N % i == 0) {
            ans = i;
            while (N % i == 0) N /= i;
        }
    }
    ans = std::max(ans, N);
    std::cout << ans << std::endl;
    std::cout << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}

// answer: 6857
// time: 0.011365
