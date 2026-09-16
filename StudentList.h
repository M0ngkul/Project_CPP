#ifndef STUDENTLIST_H
#define STUDENTLIST_H
#include "Node.h"

class StudentList {
private:
    Node* head;

public:
    StudentList();
    ~StudentList();

    void insert(Student* s);
    bool remove(int id);
    void display() const;
    Student* search(int id) const;
    void sortByGrade(); 
};

#endif
