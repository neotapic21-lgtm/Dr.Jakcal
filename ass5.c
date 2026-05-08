#include <stdio.h>

struct student {
    char name[100]; 
    int age;
    char section;
    float grade;
};

void input_Student_Data(struct student * student ){
    printf("Enter student name: ");
    scanf(" %[^\n]", s-> student name);

    printf("Enter Age: ");
    scanf("%d", &s->age);

    printf("Enter Section: ");
    scnaf(" %c", &s->section);

    printf("Enter Grade: ");
    scanf("%f", &s->grade);
}

void showStudent(struct Student student){
    printf("\n------STUDENT RECORDS-------\n");
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Section: %c\n", student.section);
    printf("Grade: %.2f\n", student.grade);
    printf("----------------------------------\n");
}

int main{

    struct Student student1;
    struct Student student2;

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