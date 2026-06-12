#include <stdio.h>

typedef struct{
    char name[50];
    char section;
    int age;
    float grade;
} Student;

void Input_Student_Data(Student *s){
    printf("Student Name: ");
    scanf("%s\n", &s->name);

    printf("Section: ");
    scanf(" %c\n", &s->section);

    printf("Age: ");
    scanf("%d\n", &s->age);

    printf("Grade: ");
    scanf("%f\n", &s->grade);
}

void StudentData(Student s){
    printf("-----STUDENT DATA-----\n");
    printf("Name: %s\n", s.name);
    printf("Section: %c\n", s.section);
    printf("Age: %d\n", s.age);
    printf("Grade: %f\n", s.grade);

}

int main(){
    Student s1;

    printf("\n----Display Student Data------\n");
    Input_Student_Data(&s1);

    printf("STUDENT DATA");
    StudentData(s1);


    return 0;
}