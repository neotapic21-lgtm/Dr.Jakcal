#include <stdio.h>

int main(void) {

    FILE *fp;
    char name[100];
    char section[100];
    char program[100];
    int age;

    sprintf(name, "Neo Tapic");
    age = 20;
    sprintf(section, "1-1");
    sprintf(program, "Diploma in Information Technology");

    fp = fopen("Neo_Tapic.txt", "w");

    fgets(name, sizeof(name), fp);
    fscanf(fp, "%d", &age);
    fscanf(fp, "%s", section);
    fgets(program, sizeof(program), fp);

    fclose(fp);
    
    fp = fopen("Neo_Tapic.txt", "r");
    fscanf(fp, "%s %d %s %s", name, &age, section, program);
    
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Section: %s\n", section);
    printf("Program: %s\n", program);

    fclose(fp);

    return 0;
}