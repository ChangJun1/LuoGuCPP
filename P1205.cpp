// https://www.luogu.com.cn/problem/P1205
#include <iostream>
#include <vector>

using namespace std;

void read(vector<vector<char> > &a);

vector<vector<char> > rotate90(const vector<vector<char> > &a);

vector<vector<char> > rotate180(const vector<vector<char> > &a);

vector<vector<char> > rotate270(const vector<vector<char> > &a);

vector<vector<char> > reflect(const vector<vector<char> > &a);

int ans(const vector<vector<char> > &a, const vector<vector<char> > &b);

void print(const vector<vector<char> > &a) {
    for (auto &v: a) {
        for (auto &c: v) {
            cout << c;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    vector<vector<char> > a(n, vector<char>(n)), b(n, vector<char>(n));
    read(a);
    read(b);
    cout << ans(a, b) << endl;
    return 0;
}

void read(vector<vector<char> > &a) {
    int n = a.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
}

bool isEqual(const vector<vector<char> > &a, const vector<vector<char> > &b) {
    int n = a.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (a[i][j] != b[i][j]) {
                return false;
            }
        }
    }
    return true;
}

vector<vector<char> > rotate90(const vector<vector<char> > &a) {
    int n = a.size();
    vector<vector<char> > res(n, vector<char>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            res[i][j] = a[n - 1 - j][i];
        }
    }
    return res;
}


vector<vector<char> > rotate180(const vector<vector<char> > &a) {
    int n = a.size();
    vector<vector<char> > res(n, vector<char>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            res[i][j] = a[n - 1 - i][n - 1 - j];
        }
    }
    return res;
}

vector<vector<char> > rotate270(const vector<vector<char> > &a) {
    int n = a.size();
    vector<vector<char> > res(n, vector<char>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            res[i][j] = a[j][n - 1 - i];
        }
    }
    return res;
}

vector<vector<char> > reflect(const vector<vector<char> > &a) {
    int n = a.size();
    vector<vector<char> > res(n, vector<char>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            res[i][j] = a[i][n - 1 - j];
        }
    }
    return res;
}

int ans(const vector<vector<char> > &a, const vector<vector<char> > &b) {
    if (isEqual(rotate90(a), b)) {
        return 1;
    } else if (isEqual(rotate180(a), b)) {
        return 2;
    } else if (isEqual(rotate270(a), b)) {
        return 3;
    } else if (isEqual(reflect(a), b)) {
        return 4;
    } else if (isEqual(rotate90(reflect(a)), b) ||
               isEqual(rotate180(reflect(a)), b) ||
               isEqual(rotate270(reflect(a)), b)) {
        return 5;
    } else if (isEqual(a, b)) {
        return 6;
    } else {
        return 7;
    }
}