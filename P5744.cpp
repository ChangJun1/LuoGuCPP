// https://www.luogu.com.cn/problem/P5744
#include <iostream>
#include <string>
#include <utility>

using namespace std;

class Student {
public:

    Student(string name, int age, int grade) : name(std::move(name)), age(age), grade(grade) {}

    void print() const {
        int newGrade = (int) (grade * 1.2);
        if (newGrade > 600) {
            newGrade = 600;
        }
        cout << name << " " << age + 1 << " " << newGrade << endl;
    }

    ~Student() = default;

private:
    string name;
    int age;
    int grade;
};

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string name;
        int age, grade;
        cin >> name >> age >> grade;
        auto *student = new Student(name, age, grade);
        student->print();
    }
    return 0;
}