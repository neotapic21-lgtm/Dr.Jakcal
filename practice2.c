#include <stdio.h>

int main(){
    int num;
    int *ptr;

    printf("Enter Interger: ");
    scanf("%d", &num);

    ptr = &num;

    printf("Enter a value: %d\n", num);
    printf("Address: %p\n", (void*)&num);
    printf("Value using pointer: %d\n", *ptr);

    return 0;
}