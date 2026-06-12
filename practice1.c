#include <stdio.h>

typedef struct{
    char name[50];
    char section;
    int age;
    float grade;
} Student;

void Input_Student_Data(Student *s){
    printf("Student Name: ");
    scanf("%s", &s->name);

    printf("Section: ");
    scanf("%c", &s->section);

    printf("Age: ");
    scanf("%d", &s->age);

    printf("Grade: ");
    scanf("%f", &s->grade);
}

void StudentData(Student){
    printf("-------STUDENT DATA-------");
    printf("Name: %s\n", s.name);
    printf("Section: %c\n", s.section);
    printf("Age: %d\n", s.age);
    printf("Grade: %f\n", s.grade);

}

int main(){
    struct Student;

    printf("----Display Student Data------");
    StudentData(&Student);

    return 0;
}