#include <stdio.h>
#include <stdlib.h>

int main() {
    // 1. NULL POINTER
    int *ptr = NULL; // CODE BY NEO TAPIC HEHEHE
    printf("The NULL Pointer: \n");
    printf("ptr: %p\n", (void*)ptr);
    
    // 2. Void pointer
    int num = 30;
    void *ptrVoid;
    ptrVoid = &num; 
    printf("\nThe Void Pointer: \n");
    printf("Void Pointer Address: %p\n", (void*)ptrVoid);
    printf("Void Pointer Value: %d\n", *(int*)ptrVoid);

    // 3. Wild pointer
    int *ptrWild; 
    printf("\nThe Wild Pointer: \n");
    printf("ptrWild: %p\n", (void*)ptrWild); 

    // 4. Dangling pointer
    int *ptrDangling;
    {
        int temp = 40; 
        ptrDangling = &temp;
    }
    printf("\nThe Dangling Pointer: \n");
    printf("ptrDangling: %p\n", (void*)ptrDangling);

    return 0;
}
