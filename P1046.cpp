// https://www.luogu.com.cn/problem/P1046
#include <iostream>

using namespace std;

int main() {
    int a[10];
    for (int i = 0; i < 10; ++i) {
        cin >> a[i];
    }
    int height;
    cin >> height;
    height += 30;
    int count = 0;
    for (int i = 0; i < 10; ++i) {
        if (height >= a[i]) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}