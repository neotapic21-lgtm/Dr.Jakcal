#include <stdio.h>

int main() {

    FILE *fp;
    char name[100];
    char course[100], section [100];
    int age;

    sprintf(name, "Neo Tapic");
    age = 20;
    sprintf(course, section, "DIT 1-1");

    fp = fopen("Neo_Tapic.txt", "w");

    fgets(name, sizeof(name), fp);
    fscanf(fp, "%d", &age);
    fgets(course, sizeof(course), fp);
    fscanf(fp, "%s", section);

    fclose(fp);
    
    fp = fopen("Neo_Tapic.txt", "r");
    fscanf(fp, "%s %d %s %s", name, &age, course, section);
    
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Program And Section: %s\n", course, section);

    fclose(fp);

    return 0;   
}