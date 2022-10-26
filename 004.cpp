#include <iostream>

bool palindrome(int i) {
    std::string s = std::to_string(i);
    std::string t = s;
    std::reverse(t.begin(), t.end());
    return s == t;
}

int main() {
    int ans = -1;
    for (int i = 100; i < 1000; ++i) {
        for (int j = 100; j < 1000; ++j) {
            int k = i * j;
            if (palindrome(k)) ans = std::max(ans, k);
        }
    }
    std::cout << ans << std::endl;
    std::cout << 1.0 * clock() / CLOCKS_PER_SEC << " s." << '\n';
    return 0;
}

// answer: 906609
// time: 0.650505 s.
