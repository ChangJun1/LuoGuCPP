// https://www.luogu.com.cn/problem/P1464
#include <cstdio>
#include <vector>

#define ll long long

using namespace std;

vector<vector<vector<ll>>> f(21, vector<vector<ll> >(21, vector<ll>(21, 1)));
ll a, b, c;

void dp(vector<vector<vector<ll>>> &f) {
    for (long long i = 1; i <= 20; i++) {
        for (long long j = 1; j <= 20; j++) {
            for (long long k = 1; k <= 20; k++) {
                if (i < j && j < k) {
                    f[i][j][k] = f[i][j][k - 1] + f[i][j - 1][k - 1] - f[i][j - 1][k];
                } else {
                    f[i][j][k] = f[i - 1][j][k] + f[i - 1][j - 1][k] + f[i - 1][j][k - 1] - f[i - 1][j - 1][k - 1];
                }
            }
        }
    }
}

ll w(ll a, ll b, ll c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return 1;
    } else if (a > 20 || b > 20 || c > 20) {
        return f[20][20][20];
    } else {
        return f[a][b][c];
    }
}

int main() {
    dp(f);
    while (scanf("%lld %lld %lld", &a, &b, &c) && a != -1 || b != -1 || c != -1) {
        printf("w(%lld, %lld, %lld) = %lld\n", a, b, c, w(a, b, c));
    }
    return 0;
}