#include <stdio.h>

int main(){
    int a[5], *p = a, sum = 0;

    printf("Enter 5 numbers: \n");
    for(int i = 0; i < 5; i++){
        scanf("%d", p + i);
        sum += *(p + i);
    }

printf("\nElements: ");
for(int i = 0; i < 5; i++) {
    printf("%d ", *(p + i));
    printf("\nSum = %d", sum);
}

return 0;
}