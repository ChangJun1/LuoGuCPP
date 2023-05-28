// https://www.luogu.com.cn/problem/P4924
#include <iostream>

using namespace std;

int arr[505][505], tmp[505][505];

void rotate(int x, int y, int r, int z) {
    if (z == 0) {
        for (int i = -r; i <= r; i++) {
            for (int j = -r; j <= r; j++) {
                tmp[x + j][y - i] = arr[x + i][y + j];
            }
        }
    } else if (z == 1) {
        for (int i = -r; i <= r; i++) {
            for (int j = -r; j <= r; j++) {
                tmp[x - j][y + i] = arr[x + i][y + j];
            }
        }
    }
    for (int i = x - r; i <= x + r; i++) {
        for (int j = y - r; j <= y + r; j++) {
            arr[i][j] = tmp[i][j];
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    int num = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            arr[i][j] = num++;
        }
    }
    for (int i = 0; i < m; ++i) {
        int x, y, r, z;
        cin >> x >> y >> r >> z;
        rotate(x, y, r, z);
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}