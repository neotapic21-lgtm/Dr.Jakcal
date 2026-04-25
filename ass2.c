#include <stdio.h>

int main() {
    int a = 20;
    int *ptr;
    
    ptr = &a;

    printf("value of a: %d\n", a);
    printf("Address of a: %p\n", (void*)&a);
    printf("Value stored in pointer: %p\n", (void*)ptr);
    printf("Dereferenced value (*ptr): %d\n", *ptr);
    
    return 0;
}