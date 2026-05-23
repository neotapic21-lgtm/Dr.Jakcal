#include <stdio.h>

int main() {

    FILE *fp;
    char name[100];
    char program[100], section [100];
    int age;

    sprintf(name, "Neo Tapic");
    age = 20;
    sprintf(program, "ABM");
    sprintf(section, "1");

    fp = fopen("Neo_Tapic.txt", "w");

    fgets(name, sizeof(name), fp);
    fscanf(fp, "%d", &age);
    fgets(program, sizeof(program), fp);
    fscanf(fp, "%s", section);

    fclose(fp);
    
    fp = fopen("Neo_Tapic.txt", "r");
    fscanf(fp, "%s %d %s %s", name, &age, program, section);
    
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Program: %s\n", program);
    printf("Section: %s\n", section);

    fclose(fp);

    return 0;   
}