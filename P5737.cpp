// https://www.luogu.com.cn/problem/P5737
#include <iostream>
#include <vector>

using namespace std;

bool isLeapYear(int year) {
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        return true;
    }
    return false;
}

int main() {
    int x, y;
    cin >> x >> y;
    int i = x;
    vector<int> res;
    while (i <= y) {
        if (isLeapYear(i)) {
            res.push_back(i);
            i += 4;
        } else {
            ++i;
        }
    }
    cout << res.size() << endl;
    for (int &i: res) {
        cout << i << " ";
    }
    return 0;
}