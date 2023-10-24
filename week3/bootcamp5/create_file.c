#include <stdio.h>

int main () {
    char* filename = "data.txt"; // Assign file name
    FILE *file = fopen (filename, "r"); // or "a", "w+", "a+"

    // Append to file
    //fprintf(file, "Copy\n");

    // This statement checks if the file has opened/created correctly
    if (file == NULL) {
        perror("Error opening file\n");
        return 1;
    }

    fclose(file); // Close the file
    return 0;
}