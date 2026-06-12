#include <stdio.h>

int main() {

    FILE *fp;
    char name[100];
    char coursesection [100];
    int age;

    sprintf(name, "Neo Tapic");
    age = 20;
    sprintf(coursesection, "DIT 1-1");

    fp = fopen("Neo_Tapic.txt", "w");

    fgets(name, sizeof(name), fp);
    fscanf(fp, "%d", &age);
    fgets(coursesection, sizeof(coursesection), fp);

    fclose(fp);
    
    fp = fopen("Neo_Tapic.txt", "r");
    fscanf(fp, "%s %d %s %s", name, &age, coursesection);
    
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Program And Section: %s\n", coursesection);

    fclose(fp);

    return 0;   
}