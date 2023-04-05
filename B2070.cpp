//https://www.luogu.com.cn/problem/B2069
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double sumOfSequence(int n) {
    double sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += pow(-1, i - 1) / i;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    double sum = sumOfSequence(n);
    cout << fixed << setprecision(4) << sum << endl;
    return 0;
}
