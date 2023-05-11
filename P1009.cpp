// https://www.luogu.com.cn/problem/P1009
#include <iostream>
#include <string>

using namespace std;

void reverse(string &s) {
    size_t len = s.size();
    for (int i = 0; i < len / 2; ++i) {
        char tmp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = tmp;
    }
}

string add(string a, string b) {
    string res;
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;
    while (i >= 0 || j >= 0 || carry > 0) {
        int num_a = i >= 0 ? a[i--] - '0' : 0;
        int num_b = j >= 0 ? b[j--] - '0' : 0;
        int sum = num_a + num_b + carry;
        carry = sum / 10;
        sum = sum % 10;
        res += to_string(sum);
    }
    reverse(res);
    return res;
}

string multiply(string a, string b) {
    int m = a.size(), n = b.size();
    string result(m + n, '0');
    for (int i = m - 1; i >= 0; i--) {
        int carry = 0;
        for (int j = n - 1; j >= 0; j--) {
            int sum = (a[i] - '0') * (b[j] - '0') + (result[i + j + 1] - '0') + carry;
            result[i + j + 1] = sum % 10 + '0';
            carry = sum / 10;
        }
        result[i] += carry;
    }
    size_t start_pos = result.find_first_not_of("0");
    if (start_pos != string::npos) {
        return result.substr(start_pos);
    }
    return "0";
}

int main() {
    int n;
    cin >> n;
    string sum = "0";
    string factor = "1";
    for (int i = 1; i <= n; ++i) {
        factor = multiply(factor, to_string(i));
        sum = add(sum, factor);
    }
    cout << sum << endl;
    return 0;
}