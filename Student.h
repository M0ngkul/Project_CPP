#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
    float grade;

public:
    Student(int id, string name, float grade);
    ~Student();

    int getId() const;
    string getName() const;
    float getGrade() const;

    void setName(string newName);
    void setGrade(float newGrade);
};

#endif
