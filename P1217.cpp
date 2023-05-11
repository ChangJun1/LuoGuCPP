// https://www.luogu.com.cn/problem/P1217
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool isPrime(int n);

int numOfDigits(int n);

void possiblePalindromeLessThan(vector<int> &arr, int count);

void Append(const vector<int> &append, vector<int> &arr);

vector<int> generatePalindrome(int count);


int main() {
    int a, b;
    cin >> a >> b;
    int count = numOfDigits(b);
    vector<int> generate = generatePalindrome(count);
    for (int i = 0; i < generate.size(); ++i) {
        if (generate[i] < a) {
            continue;
        }
        if (generate[i] > b) {
            break;
        }
        if (isPrime(generate[i])) {
            cout << generate[i] << endl;
        }
    }
    return 0;
}

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= (int) sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void Append(const vector<int> &append, vector<int> &arr) {
    if (!append.empty()) {
        arr.insert(arr.end(), append.begin(), append.end());
    }
}

void possiblePalindromeLessThan(vector<int> &arr, int count) {
    vector<int> append;
    switch (count) {
        case 1: {
            for (int d1 = 1; d1 <= 9; d1 += 2) {
                append.push_back(d1);
            }
            break;
        }
        case 2: {
            for (int d1 = 1; d1 <= 9; d1 += 2) {
                int tmp = d1 * 10 + d1;
                append.push_back(tmp);
            }
            break;
        }
        case 3: {
            for (int d1 = 1; d1 <= 9; d1 += 2) {
                for (int d2 = 0; d2 <= 9; d2++) {
                    int tmp = d1 * 100 + d2 * 10 + d1;
                    append.push_back(tmp);
                }
            }
            break;
        }
        case 4: {
            for (int d1 = 1; d1 <= 9; d1 += 2) {
                for (int d2 = 0; d2 <= 9; d2++) {
                    int tmp = d1 * 1000 + d2 * 100 + d2 * 10 + d1;
                    append.push_back(tmp);
                }
            }
            break;
        }
        case 5: {
            for (int d1 = 1; d1 <= 9; d1 += 2) {
                for (int d2 = 0; d2 <= 9; d2++) {
                    for (int d3 = 0; d3 <= 9; d3++) {
                        int tmp = d1 * 10000 + d2 * 1000 + d3 * 100 + d2 * 10 + d1;
                        append.push_back(tmp);
                    }
                }
            }
            break;
        }
        case 6: {
            for (int d1 = 1; d1 <= 9; d1 += 2) {
                for (int d2 = 0; d2 <= 9; d2++) {
                    for (int d3 = 0; d3 <= 9; d3++) {
                        int tmp = d1 * 100000 + d2 * 10000 + d3 * 1000 + d3 * 100 + d2 * 10 + d1;
                        append.push_back(tmp);
                    }
                }
            }
            break;
        }
        case 7: {
            for (int d1 = 1; d1 <= 9; d1 += 2) {
                for (int d2 = 0; d2 <= 9; d2++) {
                    for (int d3 = 0; d3 <= 9; d3++)
                        for (int d4 = 0; d4 <= 9; d4++) {
                            int tmp = d1 * 1000000 + d2 * 100000 + d3 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1;
                            append.push_back(tmp);
                        }
                }
            }
            break;
        }
        case 8: {
            for (int d1 = 1; d1 <= 9; d1 += 2) {
                for (int d2 = 0; d2 <= 9; d2++) {
                    for (int d3 = 0; d3 <= 9; d3++)
                        for (int d4 = 0; d4 <= 9; d4++) {
                            int tmp = d1 * 10000000 + d2 * 1000000 +
                                      d3 * 100000 + d4 * 10000 +
                                      d4 * 1000 + d3 * 100 +
                                      d2 * 10 + d1;
                            append.push_back(tmp);
                        }
                }
            }
            break;
        }
        default:
            break;
    }
    Append(append, arr);
}

int numOfDigits(int n) {
    int count = 0;
    while (n) {
        count++;
        n /= 10;
    }
    return count;
}

vector<int> generatePalindrome(int count) {
    vector<int> generate;
    for (int i = 1; i <= count; ++i) {
        possiblePalindromeLessThan(generate, i);
    }
    return generate;
}

// 直接遍历做判断会超时
//bool isPalindrome(int n) {
//    string s;
//    while (n) {
//        s += to_string(n % 10);
//        n /= 10;
//    }
//    string sTmp = s;
//    reverse(s.begin(), s.end());
//    return s == sTmp;
//}