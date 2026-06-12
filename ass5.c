#include <stdio.h>

struct student {
    char name[100]; 
    int age;
    char section;
    float year;
};

void input_Student_Data(struct student *s ){
    printf("Enter student name: ");
    scanf(" %[^\n]", &s->name);

    printf("Enter Age: ");
    scanf("%d", &s->age);

    printf("Enter Section: ");
    scanf(" %c", &s->section);

    printf("Enter Grade: ");
    scanf("%s", &s->year);
}

void displayStudentData(struct student s){
    printf("\n------STUDENT RECORDS-------\n");
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Section: %c\n", s.section);
    printf("Grade: %s\n", s.year);
    printf("----------------------------------\n");
}

int main (){

    struct student student1;
    struct student student2;

    printf("===== STUDENT RECORD MANAGEMENT =====\n\n");
    
    printf("Enter details for student1: \n");
    input_Student_Data(&student1);

    printf("\nEnter details for student2: \n");
    input_Student_Data(&student2);

    printf("\nDisplaying Student Records: \n");
    displayStudentData(student1);
    displayStudentData(student2);

    return 0;
}