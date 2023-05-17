// https://www.luogu.com.cn/problem/P5742
#include <iostream>

using namespace std;

class Student {
public:

    Student() : m_id(0), m_study_grade(0), m_other_grade(0) {};

    Student(int id, int study_grade, int other_grade) : m_id(id), m_study_grade(study_grade),
                                                        m_other_grade(other_grade) {}

    int GetId() const { return m_id; }

    int GetStudyGrade() const { return m_study_grade; }

    int GetOtherGrade() const { return m_other_grade; }

    void SetId(int id) { m_id = id; }

    void SetStudyGrade(int study_grade) { m_study_grade = study_grade; }

    void SetOtherGrade(int other_grade) { m_other_grade = other_grade; }

    double GetComprehensiveGrade() const {
        // 本题存在精度误差问题
        return 7 * GetStudyGrade() + 3 * GetOtherGrade();
    }

    int TotalGrade() const {
        return GetStudyGrade() + GetOtherGrade();
    }

    bool IsExcellent() const {
        if (TotalGrade() > 140 && GetComprehensiveGrade() >= 800) {
            return true;
        }
        return false;
    }

    void print() const {
        if (IsExcellent()) {
            cout << "Excellent" << endl;
            return;
        }
        cout << "Not excellent" << endl;
    }

    ~Student() = default;

private:
    int m_id;
    int m_study_grade;
    int m_other_grade;
};

int main() {
    int n;
    cin >> n;
    class Student student;
    for (int i = 0; i < n; ++i) {
        int x, y, z;
        cin >> x >> y >> z;
        student.SetId(x);
        student.SetStudyGrade(y);
        student.SetOtherGrade(z);
        student.print();
    }
    return 0;
}