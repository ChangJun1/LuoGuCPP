// https://www.luogu.com.cn/problem/P1059
#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, x;
    cin >> n;
    set<int> st;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        st.insert(x);
    }
    cout << st.size() << endl;
    for (auto &i: st) {
        cout << i << " ";
    }
    return 0;
}