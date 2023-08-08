// https://www.luogu.com.cn/problem/B3661
#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, a;
    string odd, even;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        if (a & 1) {
            odd += to_string(a) + " ";
        } else {
            even += to_string(a) + " ";
        }
    }
    cout << odd << "\n" << even << "\n";
    return 0;
}