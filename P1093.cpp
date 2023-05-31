// https://www.luogu.com.cn/problem/P1093
#include <iostream>
#include <vector>
#include <algorithm>

class student {
public:
    student(int id, int chinese_grade, int math_grade, int english_grade)
            : id(id), chinese_grade(chinese_grade), math_grade(math_grade), english_grade(english_grade) {}

    int get_id() const {
        return id;
    }

    int get_chinese_grade() const {
        return chinese_grade;
    }

    int get_math_grade() const {
        return math_grade;
    }

    int get_english_grade() const {
        return english_grade;
    }

    int get_total_grade() const {
        return get_chinese_grade() + get_math_grade() + get_english_grade();
    }

    ~student() {};

private:
    int id;
    int chinese_grade;
    int math_grade;
    int english_grade;
};

class student_compare {
public:
    bool operator()(const student &s1, const student &s2) const {
        if (s1.get_total_grade() == s2.get_total_grade()) {
            if (s1.get_chinese_grade() == s2.get_chinese_grade()) {
                return s1.get_id() < s2.get_id();
            } else {
                return s1.get_chinese_grade() > s2.get_chinese_grade();
            }
        } else {
            return s1.get_total_grade() > s2.get_total_grade();
        }
    }
};

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<student> students;
    for (int i = 0; i < n; ++i) {
        int x, y, z;
        cin >> x >> y >> z;
        students.emplace_back(i + 1, x, y, z);
    }
    sort(students.begin(), students.end(), student_compare());
    for (int i = 0; i < 5; ++i) {
        cout << students[i].get_id() << " " << students[i].get_total_grade() << endl;
    }
    return 0;
}