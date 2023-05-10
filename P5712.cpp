// https://www.luogu.com.cn/problem/P5712
#include <cstdio>

int main() {
    int x;
    scanf("%d", &x);
    char *s = "apple";
    if (x == 1 || x == 0) {
        printf("Today, I ate %d apple.", x);
    } else {
        printf("Today, I ate %d apples.", x);
    }
    return 0;
}