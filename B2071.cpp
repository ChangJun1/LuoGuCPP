//https://www.luogu.com.cn/problem/B2071
#include <iostream>
#include <cstdarg>
#include <limits>

using namespace std;

int max_int(int count, ...) {
    va_list args;
    va_start(args, count);
    int max_val = std::numeric_limits<int>::min();
    for (int i = 0; i < count; ++i) {
        int val = va_arg(args, int);
        if (val > max_val) {
            max_val = val;
        }
    }
    va_end(args);
    return max_val;
}

int main() {
    long a, b, c;
    cin >> a >> b >> c;
    int max = max_int(3, a, b, c);
    for (int i = 2; i <= max; ++i) {
        if (a % i == b % i && b % i == c % i) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
