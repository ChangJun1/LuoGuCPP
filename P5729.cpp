// https://www.luogu.com.cn/problem/P5729
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int w, x, h;
    cin >> w >> x >> h;
    int count = w * x * h;
    vector<vector<vector<int>>> a(w, vector<vector<int> >(x, vector<int>(h, 0)));

    int q;
    cin >> q;
    for (int m = 0; m < q; ++m) {
        int x1, y1, z1, x2, y2, z2;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        for (int i = x1 - 1; i < x2; ++i) {
            for (int j = y1 - 1; j < y2; ++j) {
                for (int k = z1 - 1; k < z2; ++k) {
                    a[i][j][k] = 1;
                }
            }
        }
    }

    for (auto &i: a) {
        for (auto &j: i) {
            for (auto &k: j) {
                if (k == 1) {
                    count--;
                }
            }
        }
    }

    cout << count << endl;
    return 0;
}