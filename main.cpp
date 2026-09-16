#include "StudentList.h"
#include "Queue.h"
#include <iostream>
using namespace std;

int main()
{
    StudentList list;
    EnrollmentQueue queue;
    int choice;

    do
    {
        cout << "\n--- Student Record System ---\n";
        cout << "1. Enqueue Student\n";
        cout << "2. Admit Student (Dequeue)\n";
        cout << "3. Display Students\n";
        cout << "4. Delete Student\n";
        cout << "5. Search Student by ID\n";
        cout << "6. Sort Students by Grade\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int id;
            string name;
            float grade;
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Grade: ";
            cin >> grade;
            queue.enqueue(new Student(id, name, grade));
        }
        else if (choice == 2)
        {
            Student *s = queue.dequeue();
            if (s)
                list.insert(s);
            else
                cout << "Queue empty!\n";
        }
        else if (choice == 3)
            list.display();

        else if (choice == 4)
        {
            int id;
            cout << "Enter ID to delete: ";
            cin >> id;
            if (list.remove(id))
                cout << "Deleted!\n";
            else
                cout << "Not found!\n";
        }
        else if (choice == 5)
        {
            int id;
            cout << "Enter ID to search: ";
            cin >> id;
            Student *s = list.search(id);
            if (s)
            {
                cout << "Found -> ID: " << s->getId()
                     << ", Name: " << s->getName()
                     << ", Grade: " << s->getGrade() << endl;
            }
            else
            {
                cout << "Student not found!\n";
            }
        }
        else if (choice == 6) {             
            list.sortByGrade();
            cout << "Students sorted by grade successfully!\n";
            list.display();
        }
    } while (choice != 7);

    return 0;
}
