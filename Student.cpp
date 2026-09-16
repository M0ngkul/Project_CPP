#include "Student.h"

Student::Student(int id, string name, float grade) {
    this->id = id;
    this->name = name;
    this->grade = grade;
}

Student::~Student() {
    // nothing special here, but good practice
}

int Student::getId() const { return id; }
string Student::getName() const { return name; }
float Student::getGrade() const { return grade; }

void Student::setName(string newName) { name = newName; }
void Student::setGrade(float newGrade) { grade = newGrade; }
