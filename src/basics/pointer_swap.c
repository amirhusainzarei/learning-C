#include <stdio.h>


void swap(int* i, int* j);

int main() {
    int a = 1;
    int b = 2;

    swap(&a, &b);

    printf("a: %d", a);
    printf("\n");
    printf("b: %d", b);

    return 0;
}

void swap(int* i, int* j) {
    int tmp;
    tmp = *i;
    *i = *j;
    *j = tmp;
}
