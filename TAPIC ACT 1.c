#include <stdio.h>

typedef struct {
   
    char name [100];
} Name;    
    
typedef struct{
    char address[100];
} Address;
    
typedef struct{
    char course[100];
} Course;

int main(){

    Name n;
    Address a;
    Course c;

    printf("Enter student name: ");
    scanf(" %[^\n]", n.name);

    printf("Enter student address: ");
    scanf(" %[^\n]", a.address);

    printf("Enter course: ");
    scanf(" %[^\n]", c.course);

    printf("\n------STUDENT RECORDS-------\n");
    printf("Name: %d\n", n.name);
    printf("Address: %d\n", a.address);
    printf("Course: %d\n", c.course);
    printf("--------------------------\n");

return 0;
}

        