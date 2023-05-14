// https://www.luogu.com.cn/problem/P5728
#include <iostream>
#include <vector>
#include <tuple>
#include <cmath>

using namespace std;

bool isClose(const tuple<int, int, int> &a, const tuple<int, int, int> &b);

int main() {
    int n;
    cin >> n;
    vector<tuple<int, int, int> > arr; //整复杂了，用一个二维数组会更好
    for (int i = 0; i < n; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        arr.emplace_back(a, b, c);
    }
    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (isClose(arr[i], arr[j])) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}

bool isClose(const tuple<int, int, int> &a, const tuple<int, int, int> &b) {
    int a_first = get<0>(a);
    int b_first = get<0>(b);
    int a_second = get<1>(a);
    int b_second = get<1>(b);
    int a_third = get<2>(a);
    int b_third = get<2>(b);
    if (abs(a_first - b_first) > 5) {
        return false;
    }
    if (abs(a_second - b_second) > 5) {
        return false;
    }
    if (abs(a_third - b_third) > 5) {
        return false;
    }
    if (abs(a_first + a_second + a_third - (b_first + b_second + b_third)) > 10) {
        return false;
    }
    return true;
}