#ifndef QUEUE_H
#define QUEUE_H
#include "Student.h"
#include <queue>

class EnrollmentQueue {
private:
    queue<Student*> q;

public:
    void enqueue(Student* s);
    Student* dequeue();
    bool isEmpty() const;
};

#endif
