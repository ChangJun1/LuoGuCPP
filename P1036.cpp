// https://www.luogu.com.cn/problem/P1036
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    int sqrt_n = (int) (sqrt(n));
    for (int i = 2; i <= sqrt_n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// 递归函数，用于生成所有可能的组合
// start起始位置,end数组长度，index代表已选择个数，count表示一共要选择个数
void generateCombinations(const vector<int> &arr, vector<int> &combinations, int start, int end, int index, int count,
                          int &sum, int &res) {
    if (index == count) {
        for (int i = 0; i < count; ++i) {
//            cout << combinations[i] << " ";
            sum += combinations[i];
        }
//        cout << "\n" << sum << "\n";
        if (isPrime(sum)) {
            res++;
        }
        return;
    }
    for (int i = start; i < arr.size() && end - i >= count - index; i++) {
        combinations.push_back(arr[i]);
        index++;
        generateCombinations(arr, combinations, i + 1, end, index, count, sum, res);
        // 回溯
        index--;
        combinations.pop_back();
        sum = 0;
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), tmp;
    int sum = 0, res = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    generateCombinations(a, tmp, 0, n, 0, k, sum, res);
    cout << res << endl;
    return 0;
}
