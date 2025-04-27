#include <stdio.h>

void reverse_array(int* arr, int size);

int main() {
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int length = sizeof(array) / sizeof(array[0]);
    for(int i=0; i<length; i++) {
        printf("%d, ", array[i]);
    }
    printf("\n");
    reverse_array(array, length);
    for(int i=0; i<length; i++) {
        printf("%d, ", array[i]);
    }
    return 0;
}

void reverse_array(int* arr, int size) {
    int tmp;
    for(int i=0; i<(size/2); i++) {
        tmp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = tmp; 
    }
}
