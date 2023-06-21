// https://www.luogu.com.cn/problem/P2392
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int s[4];
    for (int i = 0; i < 4; ++i) {
        cin >> s[i];
    }

    /* 若当前要处理的问题的时间和为t，最佳答案是t/2，也就是两边脑所耗时间差为0。
     问题转化为使得两边脑所耗时间差尽量小。
     01背包。保证一边始终小于等于t/2，并使其最接近t/2*/

    int res = 0;
    for (int i = 0; i < 4; ++i) {
        vector<int> a(s[i]);
        int t = 0;
        for (int j = 0; j < s[i]; ++j) {
            cin >> a[j];
            t += a[j];
        }
        vector<int> dp(t / 2 + 1, 0);
        for (int j = 0; j < s[i]; ++j) {
            for (int k = t / 2; k >= a[j]; k--) {
                dp[k] = max(dp[k], dp[k - a[j]] + a[j]);
            }
        }
        res += t - dp[t / 2];
    }

    cout << res << endl;
    return 0;
}