// https://www.luogu.com.cn/problem/P1328
#include <iostream>
#include <vector>

using namespace std;

int score(int x, int y) {
    if (x == y) {
        return 0;
    }
    if (x == 0) {
        if (y == 2 || y == 3) {
            return 1;
        } else {
            return -1;
        }
    }
    if (x == 1) {
        if (y == 0 || y == 3) {
            return 1;
        } else {
            return -1;
        }
    }
    if (x == 2) {
        if (y == 1 || y == 4) {
            return 1;
        } else {
            return -1;
        }
    }
    if (x == 3) {
        if (y == 2 || y == 4) {
            return 1;
        } else {
            return -1;
        }
    }
    if (x == 4) {
        if (y == 0 || y == 1) {
            return 1;
        } else {
            return -1;
        }
    }
}

int main() {
    int N, N_A, N_B;
    cin >> N >> N_A >> N_B;
    vector<int> a(N_A), b(N_B);
    for (int i = 0; i < N_A; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < N_B; ++i) {
        cin >> b[i];
    }
    int score_A = 0, score_B = 0;
    for (int i = 0; i < N; ++i) {
        int s = score(a[i % N_A], b[i % N_B]);
        if (s > 0) {
            score_A++;
        } else if (s < 0) {
            score_B++;
        }
    }
    cout << score_A << " " << score_B << endl;
    return 0;
}
