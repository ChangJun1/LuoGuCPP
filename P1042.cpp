// https://www.luogu.com.cn/problem/P1042
#include <iostream>
#include <vector>

using namespace std;

int main() {
    char c;
    vector<int> a(25 * 2500, 0);
    int i = 0;
    while (cin >> c && c != 'E') {
        if (c == 'W') {
            a[i] = 1;
        } else if (c == 'L') {
            a[i] = -1;
        }
        i++;
    }
    int win = 0;
    int loss = 0;
    for (int j = 0;; j++) {
        if (a[j] == 0) {
            break;
        }
        if (a[j] == 1) {
            win++;
        }
        if (a[j] == -1) {
            loss++;
        }
        if (win - loss >= 2 && win >= 11) {
            cout << win << ":" << loss << endl;
            win = 0, loss = 0;
        }
        if (loss - win >= 2 && loss >= 11) {
            cout << win << ":" << loss << endl;
            win = 0, loss = 0;
        }
    }
    cout << win << ":" << loss << endl;
    win = 0, loss = 0;
    cout << endl;
    for (int j = 0;; j++) {
        if (a[j] == 0) {
            break;
        }
        if (a[j] == 1) {
            win++;
        }
        if (a[j] == -1) {
            loss++;
        }
        if (win - loss >= 2 && win >= 21) {
            cout << win << ":" << loss << endl;
            win = 0, loss = 0;
        }
        if (loss - win >= 2 && loss >= 21) {
            cout << win << ":" << loss << endl;
            win = 0, loss = 0;
        }
    }
    cout << win << ":" << loss << endl;
    return 0;
}