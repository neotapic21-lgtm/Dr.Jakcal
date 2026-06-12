#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    char name[50];
    int quantity;
    float price;
} Product;

void inputProduct(Product *p) {
    printf("Enter Product Name (No spaces): ");
    scanf("%49s", p->name);
    
    printf("Enter Quantity: ");
    scanf("%d", &p->quantity);
    
    printf("Enter Price: ");
    scanf("%f", &p->price);
}
    
int main() {
    Product prod;
    Product *ptr = &prod; // Pointer initialization papunta sa struct variable

    // Kunin ang input mula sa user gamit ang pointer function
    printf("=== STEP 1: Input Product Details ===\n");
    inputProduct(ptr);

    // PROBLEM 3 & 5: File Handling gamit ang Safe NULL Checking at Append Mode
    // Gagamitin natin ang "a+" upang payagan ang pagsusulat sa dulo at pagbasa mula sa simula
    FILE *fp = fopen("inventory.txt", "a+");
    
    if (fp == NULL) {
        printf("Error: Hindi mabuksan o malikha ang file!\n");
        return 1; //PROBLEM 5: Ligtas na pag-exit kapag nabigo ang file stream
    }

    // PROBLEM 5: Pagsusulat sa file na may '\n' sa dulo upang ihiwalay ang mga linya
    fprintf(fp, "%s %d %.2f\n", ptr->name, ptr->quantity, ptr->price);
    printf("\n[System] Product successfully logged into inventory.txt.\n\n");

    // PROBLEM 4: Paggamit ng rewind() upang ibalik ang cursor sa position 0
    rewind(fp);

    // Local variables para sa pagbabasa ng bawat hilera mula sa file
    char rName[50];
    int rQuantity;
    float rPrice;
    int recordCount = 1;

    printf("=== STEP 2: Reading All Records From File ===\n");
    
    // PROBLEM 4: Loop gamit ang fscanf hanggang sa marating ang End-of-File (EOF)
    while (fscanf(fp, "%s %d %f", rName, &rQuantity, &rPrice) != EOF) {
        printf("Item #%d -> Item: %s | Qty: %d | Price: PHP %.2f\n", 
               recordCount, rName, rQuantity, rPrice);
        recordCount++;
    }

    // Isara ang file upang i-flush ang buffer papunta sa iyong hard drive
    fclose(fp);
    return 0;
}