// https://www.luogu.com.cn/problem/P2036
#include<cstdio>
#include <vector>
#include <cmath>

using namespace std;

void search(const vector<int> &s, const vector<int> &b, int start, int end, int p, int t, int &res) {
    if (start == end) {
        if (p == 1 && t == 0) {
            return;
        }
        res = min(abs(p - t), res);
        return;
    }
    search(s, b, start + 1, end, p * s[start], t + b[start], res);
    search(s, b, start + 1, end, p, t, res);
}

int main() {
    int n;
    scanf("%d", &n);
    vector<int> s(n), b(n);
    for (int i = 0; i < n; ++i) {
        scanf("%d%d", &s[i], &b[i]);
    }

    int res = 1e9 + 7, p = 1, t = 0;
    search(s, b, 0, n, p, t, res);
    printf("%d\n", res);
    return 0;
}