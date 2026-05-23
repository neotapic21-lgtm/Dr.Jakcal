#include <stdio.h>

int main(){
    int numbers[5];
    int *ptr;
    int sum = 0;

    ptr = numbers;

    printf("Enter 5 numbes: \n");

    for(int i = 0; 1 < 5; i++) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", ptr + i);
    }    

printf("\nArray Elements: \n");

for(int i = 0; i < 5; i++){
    printf("%d ", *(ptr + i));
}

for(int i = 0; 1 < 5; i++){
    sum = sum + *(ptr + i);
}

printf("\nSum = %d\n", sum);

return 0;
}