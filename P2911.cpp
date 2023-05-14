// https://www.luogu.com.cn/problem/P2911
#include <iostream>
#include <vector>

using namespace std;


int main() {
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    vector<int> a(s1 + s2 + s3 + 1);
    for (int i = 1; i <= s1; ++i) {
        for (int j = 1; j <= s2; ++j) {
            for (int k = 1; k <= s3; ++k) {
                a[i + j + k]++;
            }
        }
    }
    int maxCount = a[3];
    int res = 3;
    for (int i = 4; i <= s1 + s2 + s3; ++i) {
        if (a[i] > maxCount) {
            maxCount = a[i];
            res = i;
        }
    }
    cout << res << endl;
    return 0;
}