// https://www.luogu.com.cn/problem/P5721
#include <cstdio>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int k = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n + 1 - i; ++j) {
            printf("%02d", k++);
        }
        printf("\n");
    }
    return 0;
}