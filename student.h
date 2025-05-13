#ifndef STUDENT_H
#define STUDENT_H

#define MAX_NAME_LEN 50
#define MAX_STUDENTS 100

typedef struct {
    int id;
    char name[MAX_NAME_LEN];
    float grade;
} Student;

extern Student students[MAX_STUDENTS];
extern int studentCount;

void addStudent();
void viewStudents();
void searchStudent();
void updateStudent();
void deleteStudent();

#endif 