// https://www.luogu.com.cn/problem/B2550
#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

void countPrize(vector<int> &arr, int count) {
    switch (count) {
        case 1:
            arr[6]++;
            break;
        case 2:
            arr[5]++;
            break;
        case 3:
            arr[4]++;
            break;
        case 4:
            arr[3]++;
            break;
        case 5:
            arr[2]++;
            break;
        case 6:
            arr[1]++;
            break;
        case 7:
            arr[0]++;
            break;
        default:
            break;
    }
}

int main() {
    int n;
    cin >> n;
    unordered_set<int> lotterySet; // 彩票号码各不相同
    for (int i = 0; i < 7; ++i) {
        int x;
        cin >> x;
        lotterySet.insert(x);
    }

    int count = 0;
    vector<int> res(7, 0);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 7; ++j) {
            int x;
            cin >> x;
            if (lotterySet.find(x) != lotterySet.end()) {
                count++;
            }
        }
        countPrize(res, count);
        count = 0;
    }
    for (int i = 0; i < 7; ++i) {
        cout << res[i] << " ";
    }
    return 0;
}