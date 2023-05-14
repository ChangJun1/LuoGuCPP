// https://www.luogu.com.cn/problem/P5730
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    using myChar = vector<string>;
    vector<myChar> arr(10, myChar(5));
    arr[0] = {"XXX", "X.X", "X.X", "X.X", "XXX"};
    arr[1] = {"..X", "..X", "..X", "..X", "..X"};
    arr[2] = {"XXX", "..X", "XXX", "X..", "XXX"};
    arr[3] = {"XXX", "..X", "XXX", "..X", "XXX"};
    arr[4] = {"X.X", "X.X", "XXX", "..X", "..X"};
    arr[5] = {"XXX", "X..", "XXX", "..X", "XXX"};
    arr[6] = {"XXX", "X..", "XXX", "X.X", "XXX"};
    arr[7] = {"XXX", "..X", "..X", "..X", "..X"};
    arr[8] = {"XXX", "X.X", "XXX", "X.X", "XXX"};
    arr[9] = {"XXX", "X.X", "XXX", "..X", "XXX"};

    string s;
    cin >> s;
    vector<string> res(5);
    for (int i = 0; i < n; ++i) {
        int x = s[i] - '0';
        for (int j = 0; j < 5; ++j) {
            res[j] += arr[x][j];
            if (i < n - 1) {
                res[j] += ".";
            }
        }
    }
    for (int i = 0; i < 5; ++i) {
        cout << res[i] << endl;
    }
    return 0;
}