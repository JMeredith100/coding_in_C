#include <stdio.h>
#include <stdlib.h>
// Importing local files is done like #include "local_file.c"


// This function opens a file
FILE *open_file(char filename[], char mode[])
{
    FILE *file = fopen(filename, mode);
    if (file == NULL) {
        perror("Read from File");
        exit(1);
    } 
    return file;
}

int main() {
    char* filename = "data.txt";
    FILE *file = open_file(filename, "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // Reading from file
    int buffer_size = 100; // Max amount of characters per line 
    char line_buffer[buffer_size];

    // Essentially reads a file until the end
    // 'fgets' returns the value of 'line_buffer'
    while (fgets(line_buffer, buffer_size, file) != NULL) 
    {
        printf("%s", line_buffer);
    }

    fclose(file);
    return 0;
}