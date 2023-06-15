// https://www.luogu.com.cn/problem/P1618
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    int a, b, c, d, e, f, g, h, i;
    vector<vector<int> > res;
    for (a = 1; a <= 9; a++) {
        for (b = 1; b <= 9; b++) {
            if (b == a) {
                continue;
            }
            for (c = 1; c <= 9; c++) {
                if (c == a || c == b) {
                    continue;
                }
                for (d = 1; d <= 9; d++) {
                    if (d == a || d == b || d == c) {
                        continue;
                    }
                    for (e = 1; e <= 9; e++) {
                        if (e == a || e == b || e == c || e == d) {
                            continue;
                        }
                        for (f = 1; f <= 9; f++) {
                            if (f == a || f == b || f == c || f == d || f == e) {
                                continue;
                            }
                            for (g = 1; g <= 9; g++) {
                                if (g == a || g == b || g == c || g == d || g == e || g == f) {
                                    continue;
                                }
                                for (h = 1; h <= 9; h++) {
                                    if (h == a || h == b || h == c || h == d || h == e || h == f || h == g) {
                                        continue;
                                    }
                                    for (i = 1; i <= 9; i++) {
                                        if (i == a || i == b || i == c || i == d || i == e || i == f || i == g ||
                                            i == h) {
                                            continue;
                                        }
                                        int tmp1 = a * 100 + b * 10 + c;
                                        int tmp2 = d * 100 + e * 10 + f;
                                        int tmp3 = g * 100 + h * 10 + i;
                                        if (tmp1 * B == tmp2 * A && tmp2 * C == tmp3 * B) {
                                            res.push_back({tmp1, tmp2, tmp3});
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (res.empty()) {
        cout << "No!!!" << endl;
        return 0;
    }
    for (auto &v: res) {
        for (auto &item: v) {
            cout << item << " ";
        }
        cout << "\n";
    }
    return 0;
}