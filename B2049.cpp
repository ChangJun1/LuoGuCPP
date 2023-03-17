//https://www.luogu.com.cn/problem/B2049
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << max(max(a, b), c) << endl;
    return 0;
}