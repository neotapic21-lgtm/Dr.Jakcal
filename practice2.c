#include <stdio.h>

int main(){
    int num;
    int *ptr;

    printf("Enter Interger: ");
    scanf("%d", &num);

    ptr = &num;

    printf("Enter a value: %d", num);
    printf("Address: %p", (void*)num);
    printf("Value using pointer: %d", *ptr);

    return 0;
}