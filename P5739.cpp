// https://www.luogu.com.cn/problem/P5739
#include <iostream>

using namespace std;

// 1 < = n < = 12
int factorial(int n) {
    if (n <= 2) {
        return n;
    }
    return n * factorial(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}