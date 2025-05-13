#include <stdio.h>
#include <string.h>
#include "student.h"

Student students[MAX_STUDENTS];
int studentCount = 0;

void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        printf("Student list full!\n");
        return;
    }

    Student s;
    printf("Enter ID: ");
    scanf("%d", &s.id);
    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter Grade: ");
    scanf("%f", &s.grade);

    students[studentCount++] = s;
    printf("Student added! \n");
}

void viewStudents() {
    if (studentCount == 0) {
        printf("No students found.\n");
        return;
    }

    printf("\n-- All Students --\n");
    for (int i = 0; i < studentCount; i++) {
        printf("ID: %d, Name: %s, Grade: %.2f\n", students[i].id, students[i].name, students[i].grade);
    }
}

void searchStudent() {
    int id;
    printf("Enter ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == id) {
            printf("Student found: ID: %d, Name: %s, Grade: %.2f\n", students[i].id, students[i].name, students[i].grade);
            return;
        }
    }
    printf("Student not found.\n");
}