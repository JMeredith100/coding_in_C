#include <stdio.h>
#include "utils.h"

int main () {
    char* filename = "data.txt";
    FILE *file = open_file(filename, "w");

    fprintf(file, "Hello World!\n"); // Wites to the file (file passed in as parameter as well as the data)

    fclose(file);
    return 0;
}