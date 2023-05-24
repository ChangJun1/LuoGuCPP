// https://www.luogu.com.cn/problem/P5734
#include <iostream>
#include <string>

using namespace std;

int main() {
    int q;
    cin >> q;
    string str;
    cin >> str;
    for (int i = 0; i < q; ++i) {
        int x;
        string s;
        int a, b;
        cin >> x;
        switch (x) {
            case 1: {
                cin >> s;
                str += s;
                cout << str << endl;
                break;
            }
            case 2: {
                cin >> a >> b;
                str = str.substr(a, b);
                cout << str << endl;
                break;
            }
            case 3: {
                cin >> a >> s;
                str = str.insert(a, s);
                cout << str << endl;
                break;
            }
            case 4: {
                cin >> s;
                size_t index = str.find(s);
                if (index != string::npos) {
                    cout << index << endl;
                } else {
                    cout << -1 << endl;
                }
            }
            default:
                break;
        }
    }
    return 0;
}