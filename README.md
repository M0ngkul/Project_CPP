# Student Record System (DSA Mini Project)

## Overview
This project implements a student record system using core data structures:
- Linked List (for storing students)
- Queue (for pending enrollments)
- Sorting (by grade)
- Search (by ID)

## Features
- Add, delete, display students
- Search by ID
- Sort by grade
- Enrollment queue (FIFO)

## Files
- Student.h / Student.cpp: Defines Student class
- Node.h: Defines linked list node
- StudentList.h / StudentList.cpp: Linked list operations
- Queue.h / Queue.cpp: Enrollment queue
- main.cpp: Menu loop and integration
- README.md: Documentation

## Compilation
```bash
g++ main.cpp Student.cpp StudentList.cpp Queue.cpp -o StudentSystem
