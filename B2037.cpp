//https://www.luogu.com.cn/problem/B2037
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n & 1) {
        cout << "odd" << endl;
    } else {
        cout << "even" << endl;
    }
    return 0;
}