#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string num;
    int grade;

    Student() {}
    Student(string n, int g) : num(n), grade(g) {}
};

void max(Student* s) {
    Student* p = s;
    for (int i = 1; i < 5; i++) {
        if ((s + i)->grade > p->grade) {
            p = s + i;
        }
    }
    cout << "成绩最高者的学号为：" << p->num << endl;
}

int main() {
    Student stu[5] = {
        Student("202107044123", 99),
        Student("202107044124", 87),
        Student("202107044125", 89),
        Student("202107044126", 94),
        Student("202107044127", 73)
    };

    max(stu);

    return 0;
}