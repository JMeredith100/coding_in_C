#include <stdio.h>
#include <string.h>

typedef unsigned char mark_t; // This names a type (e.g., unsigned integer) 

// The name of the struct is defined at the end
typedef struct {
    char name [20];
    char student_id [10]; // Assuming 10 digits.
    mark_t mark;
} student;

int main () {
    int n = 3;
    student new_student [3] = {
        {}, {}, {}
    };
    // The two lines below assign values to 'new_student' 
    strcpy(new_student.name, "Name Surname");
    strcpy(new_student.student_id, "13902178");
    printf("Student name: %s\n", new_student.name);
    printf("Student ID:   %s\n", new_student.student_id);
    printf("Final mark:   %u\n", new_student.mark);
    return 0;
}