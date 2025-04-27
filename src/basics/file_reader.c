#include <stdio.h>


int main() {
    char file_name[] = "file_reader.c";
    int buffer_size = 100;
    FILE *fptr = fopen(file_name, "r");
    char buffer[buffer_size];

    if(fptr != NULL) {
        while(fgets(buffer, buffer_size, fptr)) {
            printf("%s", buffer);
        }    
    }
    else {
        printf("there is no file with name %s", file_name);
    }

    fclose(fptr);

    return 0;    
}
