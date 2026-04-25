#include <stdio.h>

int main() {

    int num;
    int *ptr;

    printf("Ener an integer: ");
    scanf("%d", &num);

    ptr = &num;

    printf("Entered a value: %d\n", num);
    printf("Address: %p\n", (void*)&num);
    printf("Value using a pointer: %d\n", *ptr);
    return 0;
}