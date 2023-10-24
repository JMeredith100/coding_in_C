#include <stdio.h>

int main () {
    char* filename = "data.txt"; 
    FILE *file = fopen (filename, "w"); 

    if (file == NULL) {
        perror("Error opening file\n");
        return 1;
    }

    printf("How many numbers? ")

    for (i = 1; i < 10; i++)
    {

    }

    fclose(file); // Close the file
    return 0;
}