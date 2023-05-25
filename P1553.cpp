// https://www.luogu.com.cn/problem/P1553
#include <iostream>
#include <string>

using namespace std;

void reverseString(string &s) {
    for (int i = 0; i < s.size() / 2; ++i) {
        char tmp = s[i];
        s[i] = s[s.size() - 1 - i];
        s[s.size() - 1 - i] = tmp;
    }
}


int main() {
    string s;
    cin >> s;
    size_t n = s.length();
    size_t index_dot = s.find('.');
    size_t index_divide = s.find('/');
    if (s[n - 1] == '%') {
        string subStr = s.substr(0, n - 1);
        reverseString(subStr);
        size_t index = subStr.find_first_not_of('0');
        if (index != string::npos) {
            subStr = subStr.substr(index);
        } else {
            subStr = "0";
        }
        cout << subStr << "%" << endl;
    } else if (index_divide != string::npos) {
        string subStr1 = s.substr(0, index_divide);
        reverseString(subStr1);
        size_t index1 = subStr1.find_first_not_of('0');
        if (index1 != string::npos) {
            subStr1 = subStr1.substr(index1);
        } else {
            subStr1 = "0";
        }
        string subStr2 = s.substr(index_divide + 1);
        reverseString(subStr2);
        size_t index2 = subStr2.find_first_not_of('0');
        subStr2 = subStr2.substr(index2);
        cout << subStr1 << "/" << subStr2 << endl;
    } else if (index_dot != string::npos) {
        string subStr1 = s.substr(0, index_dot);
        reverseString(subStr1);
        size_t index1 = subStr1.find_first_not_of('0');
        if (index1 != string::npos) {
            subStr1 = subStr1.substr(index1);
        } else {
            subStr1 = "0";
        }

        string subStr2 = s.substr(index_dot + 1);
        size_t index2 = subStr2.find_first_not_of('0');
        if (index2 != string::npos) {
            subStr2 = subStr2.substr(index2);
        } else {
            subStr2 = "0";
        }
        reverseString(subStr2);
        cout << subStr1 << "." << subStr2 << endl;
    } else {
        reverseString(s);
        size_t index = s.find_first_not_of('0');
        if (index != string::npos) {
            s = s.substr(index);
        } else {
            s = "0";
        }
        cout << s << endl;
    }
    return 0;
}
