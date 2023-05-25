// https://www.luogu.com.cn/problem/P1303
#include <iostream>
#include <string>

using namespace std;

string multiply(const string &a, const string &b) {
    int len_a = a.size(), len_b = b.size();
    string res(len_a + len_b, '0');
    int flag = 0;
    for (int i = len_a - 1; i >= 0; --i) {
        for (int j = len_b - 1; j >= 0; --j) {
            int product = (a[i] - '0') * (b[j] - '0');
            int sum = product + (res[i + j + 1] - '0');
            flag = sum / 10;
            sum = sum % 10;
            res[i + j + 1] = sum + '0';
            res[i + j] += flag;
        }
    }
    size_t index = res.find_first_not_of('0');
    if (index != string::npos) {
        res = res.substr(index);
    } else {
        res = "0";
    }
    return res;
}

int main() {
    string a, b;
    cin >> a >> b;
    string res = multiply(a, b);
    cout << res << endl;
    return 0;
}