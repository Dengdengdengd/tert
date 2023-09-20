#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;
class Student {
public:
    string id;
    string name;

    Student(const string& id, const string& name) : id(id), name(name) {}

    void setStudentDetails(const string& id, const string& name) {
        this->id = id;
        this->name = name;
    }

    void printStudentInfo() const {
        cout << "学生信息包括：" << endl;
        cout << "学号：" << id << endl;
        cout << "姓名：" << name << endl;
    }

    void saveStudentInfo(ofstream& file) const {
        file << "学生信息包括：" << endl;
        file << "学号：" << id << endl;
        file << "姓名：" << name << endl;
    }
};


#endif // STUDENT_H
