#include <stdio.h>

#define MAX_STUDENTS 100

typedef struct {
    char name[50];
    int rollNo;
    float marks;
} Student;

void addStudent(Student *s, int *count);
void displayStudents(const Student *s, int count);

int main() {
    Student students[MAX_STUDENTS];
    int studentCount = 0;
    int choice;

    // Function pointers
    void (*addPtr)(Student *, int *) = addStudent;
    void (*displayPtr)(const Student *, int) = displayStudents;

    while (1) {
        printf("1. Add Student\n");
        printf("2. Display Mark List\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addPtr(students, &studentCount);
                break;
            case 2:
                displayPtr(students, studentCount);
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

void addStudent(Student *s, int *count) {
    if (*count >= MAX_STUDENTS) {
        printf("Student list is full!\n");
        return;
    }

    printf("Enter name: ");
    scanf("%s", s[*count].name);
    printf("Enter roll number: ");
    scanf("%d", &s[*count].rollNo);
    printf("Enter marks: ");
    scanf("%f", &s[*count].marks);

    (*count)++;
    printf("Student added successfully!\n");
}

void displayStudents(const Student *s, int count) {
    printf("Mark List:\n");
    for (int i = 0; i < count; i++) {
        printf("Name: %s, Roll No: %d, Marks: %.2f\n", s[i].name, s[i].rollNo, s[i].marks);
    }
}
