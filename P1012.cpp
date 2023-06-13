// https://www.luogu.com.cn/problem/P1012
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool comp(const std::string &a, const std::string &b) {
    size_t len_a = a.size(), len_b = b.size();
    size_t n = std::min(len_a, len_b);
    for (size_t i = 0; i < n; ++i) {
        if (a[i] > b[i]) {
            return true;
        } else if (a[i] < b[i]) {
            return false;
        }
    }
    if (len_a < len_b) {
        return a[0] > b[len_a];
    } else if (len_a > len_b) {
        return a[len_b] > b[0];
    }
    return false;
}

/*// 简便做法
bool cmp(const std::string &a, const std::string &b) {
    return (a + b > b + a);
}*/

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end(), comp);
    std::string res;
    for (int i = 0; i < n; ++i) {
        res += a[i];
    }
    std::cout << res << std::endl;
    return 0;
}
