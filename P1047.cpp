// https://www.luogu.com.cn/problem/P1047
#include <iostream>
//#include <fstream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int l, m;
    cin >> l >> m;
//    ifstream fin("/Users/ach/Downloads/P1047_3.in");
//    if (!fin) {
//        cerr << "Error: cannot open file input.txt" << endl;
//        return 1;
//    }
//    fin >> l >> m;
    vector<pair<int, int> > arr(m);
    vector<int> len_arr;
//    for (int i = 0; i < m; ++i) {
//        int x, y;
//        fin >> x >> y;
//        arr[i].first = x;
//        arr[i].second = y;
//    }
//    fin.close();
    for (int i = 0; i < m; ++i) {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr.begin(), arr.end());
    int cur_begin = arr[0].first;
    int cur_end = arr[0].second;
    int cur_len = cur_end - cur_begin + 1;
    for (int i = 1; i < m; ++i) {
        if (arr[i].first <= cur_end) {
            // 有重合
            cur_end = max(cur_end, arr[i].second);
        } else {
            len_arr.push_back(cur_len);
            cur_begin = arr[i].first;
            cur_end = arr[i].second;
        }
        cur_len = cur_end - cur_begin + 1;
    }
    len_arr.push_back(cur_len);
    int sum = accumulate(len_arr.begin(), len_arr.end(), 0, [&](int x, int y) { return x + y; });
    int res = l + 1 - sum;
    cout << res << endl;
    return 0;
}