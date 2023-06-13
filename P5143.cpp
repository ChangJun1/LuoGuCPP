// https://www.luogu.com.cn/problem/P5143
#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>

struct coordinate {
    int x;
    int y;
    int z;
};

bool comp(const coordinate &a, const coordinate &b) {
    return a.z < b.z;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<coordinate> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i].x >> a[i].y >> a[i].z;
    }
    std::sort(a.begin(), a.end(), comp);
    double res = 0.0;
    for (int i = 0; i < n - 1; ++i) {
        res += sqrt(pow(a[i + 1].x - a[i].x, 2) + pow(a[i + 1].y - a[i].y, 2) + pow(a[i + 1].z - a[i].z, 2));
    }
    std::cout << std::fixed << std::setprecision(3) << res << std::endl;
    return 0;
}
