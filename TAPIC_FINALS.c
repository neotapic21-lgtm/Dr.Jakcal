#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Refactor this struct using 'typedef' 
// so you can use 'Student' as a clean alias type throughout the program.
// Add also program_code[10] as a member of this struct and include in every output and saved to file.
typedef struct s1 {
    char first_name[15];
    char last_name[15];
    int age; 
    float grade;
    float final_grade;
} Student; 

// Fix the Formula of the seventy_grade.
float total_grade(a, b, c, d, e) 
{
    float seventy_grade = a + b + c + d + e / 5  * (0.7);
    float thirty_grade = e * 0.3;
    return seventy_grade + thirty_grade;
}

// Refactor this function to accept a pointer to the student struct 
// instead of relying on global variables. Use the pointer arrow (->) operator.
void output_grade (Student *s, float a){
    printf("\nFullname: %s  %s\n", s->first_name, s->last_name);
    printf("Age: %d\n", s->age);
    printf("\nYour desired grade is %.2f\n", s->grade);
    printf("\nYour Final grades is: %.2f\n", s->final_grade = a);
    printf("\nYour Grade based on your computation is %.2f\n\n", s->final_grade);
    if (s->grade >= s->final_grade){
        printf("Your desired grade is closer or higher to computed grade.\n");
    }else{
        printf("Your desired grade is closer or lower to computed grade.\n");
    }
}

// This function is completely broken! 
// Fix them.
void save_to_file(Student *s) {
    FILE *file_ptr = fopen("grade_report.txt", "r"); 
    
    if (file_ptr == NULL) {
        printf("Error: Could not create or open file!\n");
        return;
    }

    fprintf(file_ptr, "--- Student Grade Report ---\n");
    fprintf(file_ptr, "Fullname: %s %s\n", s1.first_name, s1.last_name);
    fprintf(file_ptr, "Age: %d\n", s1.age);
    fprintf(file_ptr, "Desired Grade: %.2f\n", s1.grade);
    fprintf(file_ptr, "Computed Final Grade: %.2f\n", s1.final_grade);

    fclose(file_ptr);
    printf("\nOutput has been saved to 'grade_report.txt'!\n");
}

void print_info(){
    printf("LEGEND: \nA. Attendance\nB. Recitation\n");
    printf("C. Quiz\nD. Group/Home work\nTotal Percent = 70%\n");
    printf("E. Midterm\\Final Exam = 30%\nTotal Grade = 100%\n\n");
}

int main() {
    // This buffer size is dangerously small for typing strings like "yes" or "no"
    char answer[50]; 
    int repeat = 0;
    float a, b, c, d, e;

    printf("Input your First name: ");
    scanf("%s", &s1.first_name);
    printf("Input your Last name: ");
    scanf("%s", &s1.last_name);
    printf("Input your Age: ");
    scanf("%d", &s1.age);
    printf("Input your desire Grade: ");
    scanf("%f", &s1.grade);

    do {
        printf("Input your grade from range of 75 to 100\n");
        print_info();
    
        printf("Input your Attendance: ");
        scanf("%f", &a);
        printf("Input your Recitation: ");
        scanf("%f", &b);
        printf("Input your Quiz: ");
        scanf("%f", &c);
        printf("Input your Group/Home work: ");
        scanf("%f", &d);
        printf("Input your Final Exam: ");
        scanf("%f", &e);

        float grade = total_grade(a,b,c,d,e);
        output_grade(grade);

        printf("Do you want to compute again your grade? \nPlease type yes or no: ");
        scanf("%s", answer);

        if (strcmp(answer, "yes") == 0){
            repeat = 1;
        }else {
            repeat = 0;
        }

    } while (repeat == 1);
    
    // Asking the end user to save output to file
    printf("\nDo you want to save this output to a file? (yes/no): ");
    scanf("%s", answer);
    
    if (strcmp(answer, "yes") == 0) {
        // Hint: Check how the pointer is passed here
        save_to_file(s1); 
    }

    printf("\n\nBut the Lord is faithful, \nwho shall stablish you, \nand keep you from evil.\n2 Thessalonians 3:3");
    printf("\nGod bless, Class!\n");

    return 0;
}
