//https://www.luogu.com.cn/problem/B2035
#include <iostream>

using namespace std;

int main() {
    long long N;
    cin >> N;
    if (N > 0) {
        cout << "positive" << endl;
    } else if (N < 0) {
        cout << "negative" << endl;
    } else {
        cout << "zero" << endl;
    }
    return 0;
}