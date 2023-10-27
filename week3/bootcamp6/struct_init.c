#include <stdio.h>

// This is a struct. It is a place in memory that holds data.
struct student {
    char name [20];
    char student_id [10]; // Assuming 10 digits.
    unsigned mark;
};

int main () {
    // The line below initialises a new instance of the 'student' struct, named 'new_student'
    struct student new_student = {.name = "Name Surname",
                                  .student_id = "28932123", 
                                  .mark = 35};
    printf("Enter mark: ");
    scanf("%d", &new_student.mark);
    printf("Student name: %s\n", new_student.name);
    printf("Student ID:   %s\n", new_student.student_id);
    printf("Final mark:   %u\n", new_student.mark);
    return 0;
}