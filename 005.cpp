#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int N = 20;
    std::vector<int> cnt(N * 1);
    for (int i = 2; i <= N; ++i) {
        int x = i;
        for (int j = 2; j <= x; ++j) {
            int c = 0;
            while (x % j == 0) {
                ++c;
                x /= j;
            }
            cnt[j] = std::max(cnt[j], c);
        }
    }
    long long ans = 1;
    for (int i = 2; i <= N; ++i) ans *= std::pow(i, cnt[i]);
    std::cout << ans << std::endl;
    std::cout << 1.0 * clock() / CLOCKS_PER_SEC << " s." << '\n';
    return 0;
}

// answer: 232792560
// time: 0.010732 s.
