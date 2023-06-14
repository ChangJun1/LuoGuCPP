// https://www.luogu.com.cn/problem/B2112
#include <iostream>
#include <string>

int compare(const std::string &s1, std::string &s2) {
    if (s1 == s2) {
        return 0;
    } else if (s1 == "Rock" && s2 == "Scissors" || s1 == "Scissors" && s2 == "Paper" || s1 == "Paper" && s2 == "Rock") {
        return 1;
    } else {
        return -1;
    }
}

int main() {
    int n;
    std::cin >> n;
    std::string s1, s2;
    for (int i = 0; i < n; ++i) {
        std::cin >> s1 >> s2;
        if (compare(s1, s2) == 1) {
            std::cout << "Player1" << "\n";
        } else if (compare(s1, s2) == 0) {
            std::cout << "Tie" << "\n";
        } else {
            std::cout << "Player2" << "\n";
        }
    }
    return 0;
}