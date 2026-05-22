#include <stdio.h>

int main(void) {

    FILE *fp;
    char name[100];
    char program[100];
    char section[100];
    int age;

    sprintf(name, "Neo Tapic");
    age = 20;
    sprintf(program, "Diploma in Information Technology");
    sprintf(section, "1-1");

    fp = fopen("Neo_Tapic.txt", "w");

    fprintf(fp, "%s\n", name);
    fprintf(fp, "%d\n", age);
    fprintf(fp, "%s\n", program);
    fprintf(fp, "%s\n", section);

    fclose(fp);
    
    fp = fopen("Neo_Tapic.txt", "r");
    fscanf(fp, "%s %d %s %s", name, &age, section, program);
    
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Program: %s\n", program);
    printf("Section: %s\n", section);

    fclose(fp);

    return 0;
}