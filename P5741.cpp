// https://www.luogu.com.cn/problem/P5741
#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<tuple<string, int, int, int> > arr(n); // a better way is to define a struct or a class to organize data
    for (int i = 0; i < n; ++i) {
        string s;
        int x, y, z;
        cin >> s >> x >> y >> z;
        arr[i] = make_tuple(s, x, y, z);
    }
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (abs(get<1>(arr[i]) - get<1>(arr[j])) <= 5 &&
                abs(get<2>(arr[i]) - get<2>(arr[j])) <= 5 &&
                abs(get<3>(arr[i]) - get<3>(arr[j])) <= 5 &&
                abs(get<1>(arr[i]) - get<1>(arr[j]) + get<2>(arr[i]) - get<2>(arr[j]) + get<3>(arr[i]) -
                    get<3>(arr[j])) <= 10
                    ) {
                cout << get<0>(arr[i]) << " " << get<0>(arr[j]) << endl;
            }
        }
    }
    return 0;
}