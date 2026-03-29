#include <stdio.h>

void printText() {
    printf("1. Hello, vlog welcome to my guys\n");
}

void add(int x, int y)
{
    int sum = x + y;
    printf("2. The sum of: %d\n", sum );
}


int squareNumber(int text) {
    return text * text;
}

int Factorial(int n)
{
    if (n <= 1) {
        return 1;
    }
    return n * Factorial(n - 1);
}

int main() {
    
    // 1
    printText();
    // 2
    add(5, 10);
   // 3 
    int result = squareNumber(4);
    printf("3. The square of 4 is: %d\n", result);
    // 4
    int factorial = Factorial(5);
    printf("4. Factorial of 5 is: %d\n", factorial);
    return 0;
}