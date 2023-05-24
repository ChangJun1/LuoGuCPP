// https://www.luogu.com.cn/problem/P3741
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n < 2) {
        cout << 0 << endl;
        return 0;
    }
    int i = 0, count = 0;
    vector<bool> visited(n, false);
    size_t index = s.find("VK");
    while (index != string::npos) {
        count++;
        visited[index] = true;
        visited[index + 1] = true;
        index = s.find("VK", index + 2);
    }
    for (int i = 0; i < s.size() - 1; ++i) {
        if (!visited[i] && !visited[i + 1] && (s[i] == 'V' && s[i + 1] == 'V' || s[i] == 'K' && s[i + 1] == 'K')) {
            count++;
            break;
        }
    }
    cout << count << endl;
    return 0;
}