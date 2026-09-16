#include "Queue.h"

void EnrollmentQueue::enqueue(Student* s) { q.push(s); }
Student* EnrollmentQueue::dequeue() {
    if (q.empty()) return nullptr;
    Student* s = q.front();
    q.pop();
    return s;
}
bool EnrollmentQueue::isEmpty() const { return q.empty(); }
