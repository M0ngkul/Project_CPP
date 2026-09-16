#include "StudentList.h"
#include <iostream>
using namespace std;

StudentList::StudentList() : head(nullptr) {}
StudentList::~StudentList() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void StudentList::insert(Student* s) {
    Node* newNode = new Node(s);
    newNode->next = head;
    head = newNode;
}

bool StudentList::remove(int id) {
    Node* temp = head, *prev = nullptr;
    while (temp) {
        if (temp->data->getId() == id) {
            if (prev) prev->next = temp->next;
            else head = temp->next;
            delete temp;
            return true;
        }
        prev = temp;
        temp = temp->next;
    }
    return false;
}

void StudentList::display() const {
    Node* temp = head;
    while (temp) {
        cout << "ID: " << temp->data->getId()
             << ", Name: " << temp->data->getName()
             << ", Grade: " << temp->data->getGrade() << endl;
        temp = temp->next;
    }
}

Student* StudentList::search(int id) const {
    Node* temp = head;
    while (temp) {
        if (temp->data->getId() == id) {
            return temp->data; // Found student
        }
        temp = temp->next;
    }
    return nullptr; // Not found
}

void StudentList::sortByGrade() {
    if (!head || !head->next) return; // Empty or single element list

    bool swapped;
    do {
        swapped = false;
        Node* current = head;

        while (current->next) {
            // Sorts in descending order (highest grade first)
            if (current->data->getGrade() < current->next->data->getGrade()) {
                Student* temp = current->data;
                current->data = current->next->data;
                current->next->data = temp;
                swapped = true;
            }
            current = current->next;
        }
    } while (swapped);
}