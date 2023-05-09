// https://www.luogu.com.cn/problem/B2102
#include <iostream>
#include <vector>
#include <tuple>
#include <climits>

using namespace std;

int main() {
    vector<vector<int> > arr(5, vector<int>(5));
    vector<tuple<int, pair<int, int>>> maxArr;
    for (int i = 0; i < 5; ++i) {
        int maxV = INT_MIN;
        pair<int, int> maxIndex;
        for (int j = 0; j < 5; j++) {
            int tmp;
            cin >> tmp;
            arr[i][j] = tmp;
            if (tmp > maxV) {
                maxV = tmp;
                maxIndex.first = i + 1;
                maxIndex.second = j + 1;
            }
        }
        maxArr.emplace_back(maxV, maxIndex);
    }

    tuple<int, pair<int, int> > res;
    bool flag = false;
    for (int i = 0; i < 5; ++i) {
        int count = 0;
        int col = get<1>(maxArr[i]).second - 1;
        for (int j = 0; j < 5; ++j) {
            if (get<0>(maxArr[i]) <= arr[j][col]) {
                count++;
            }
        }
        if (count == 5) {
            res = maxArr[i];
            flag = true;
            break;
        }
    }

    if (!flag) {
        cout << "not found" << endl;
    } else {
        cout << get<1>(res).first << " "
             << get<1>(res).second << " "
             << get<0>(res) << endl;
    }
    return 0;
}