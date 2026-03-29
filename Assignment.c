#include <stdio.h>

int squareNumber(int num) {
    return num * num;
}

int main() {
    int result = squareNumber(5);
    printf("Square of 5: %d\n", result);
    return 0;
}