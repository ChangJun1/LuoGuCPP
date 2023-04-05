//https://www.luogu.com.cn/problem/B2069
#include <iostream>
#include <iomanip>

using namespace std;

double sumOfSequence(int n) {
    if (n == 1) {
        return 2.0;
    }
    double pi = 1.0, qi = 2.0;
    double sum = qi / pi;
    for (int i = 2; i <= n; ++i) {
        double tmp = qi;
        qi = pi + qi;
        pi = tmp;
        sum += qi / pi;
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
