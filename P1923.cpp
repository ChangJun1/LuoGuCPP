// https://www.luogu.com.cn/problem/P1923
// 本题难点在于对快排的优化，由于只需要输出第k大的数，
// 所以在选择pivot后，partition返回值可以判断在哪个区间，只需在那个区间操作即可
// 试过堆排序 随机快排等方法，均会超时
#include<bits/stdc++.h>

using namespace std;
int x[5000005], k;

void qsort(int l, int r) {
    int i = l, j = r, mid = x[(l + r) / 2];
    do {
        while (x[j] > mid)
            j--;
        while (x[i] < mid)
            i++;
        if (i <= j) {
            swap(x[i], x[j]);
            i++;
            j--;
        }
    } while (i <= j);
    //快排后数组被划分为三块： l<=j<=i<=r
    if (k <= j) qsort(l, j);//在左区间只需要搜左区间
    else if (i <= k) qsort(i, r);//在右区间只需要搜右区间
    else //如果在中间区间直接输出
    {
        printf("%d", x[j + 1]);
        exit(0);
    }
}

int main() {
    int n;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf("%d", &x[i]);
    qsort(0, n - 1);
}