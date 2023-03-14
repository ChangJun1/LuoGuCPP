//https://www.luogu.com.cn/problem/B2028
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    std::string s;
    getline(cin, s);
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}
