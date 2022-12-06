#include <iostream>
#include <vector>

int main() {
    const int N = 2000000;
    std::vector<bool> prime(N, true);
    prime[0] = false;
    prime[1] = false;
    long long ans = 0;
    for (int i = 2; i < N; ++i) {
        if (!prime[i]) continue;
        ans += i;
        for (int j = i + i; j < N; j += i) prime[j] = false;
    }
    std::cout << ans << std::endl; // 142913828922
    std::cout << 1.0 * clock() / CLOCKS_PER_SEC << " s." << '\n'; // 0.266487 s.
    return 0;
}
