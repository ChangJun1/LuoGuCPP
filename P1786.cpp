// https://www.luogu.com.cn/problem/P1786
#include<iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

struct BangPai {
    string name;
    string position;
    unsigned int wealth;
    unsigned int level;
    unsigned int input_order;
};

unordered_map<string, int> m = {{"BangZhong", 1},
                                {"JingYing",  2},
                                {"TangZhu",   3},
                                {"ZhangLao",  4},
                                {"HuFa",      5},
                                {"FuBangZhu", 6},
                                {"BangZhu",   7}};

bool cmp1(const BangPai &x, const BangPai &y) {
    if (x.wealth == y.wealth) {
        return x.input_order < y.input_order;
    }
    return x.wealth > y.wealth;
}

bool cmp2(const BangPai &x, const BangPai &y) {
    if (x.position == y.position) {
        if (x.level == y.level) {
            return x.input_order < y.input_order;
        }
        return x.level > y.level;
    }
    return m[x.position] > m[y.position];
}

void changePosition(vector<BangPai> &a, int n) {
    for (int i = 3; i < n; ++i) {
        if (i < 5) {
            a[i].position = "HuFa";
        } else if (i < 9) {
            a[i].position = "ZhangLao";
        } else if (i < 16) {
            a[i].position = "TangZhu";
        } else if (i < 41) {
            a[i].position = "JingYing";
        } else {
            a[i].position = "BangZhong";
        }
    }
}

void print(const vector<BangPai> &a, int n) {
    for (int i = 0; i < n; ++i) {
        cout << a[i].name << " " << a[i].position << " " << a[i].level << endl;
    }
}

int main() {
    int n;
    cin >> n;
    vector<BangPai> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].name >> a[i].position >> a[i].wealth >> a[i].level;
        a[i].input_order = i;
    }
    // 输入顺序也是按照职位排的，所以前3个必然是帮主、副帮主、副帮主，不用参与排序
    sort(a.begin() + 3, a.end(), cmp1);
    // 按照帮贡调整职位
    changePosition(a, n);
    // 按照职位排序
    sort(a.begin(), a.end(), cmp2);
    print(a, n);
    return 0;
}
