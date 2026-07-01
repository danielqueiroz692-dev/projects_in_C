#include <stdio.h>

int main () {
    float grade_1, grade_2, grade_3, grade_4;
    unsigned choice;
    float mean;

    printf("Choose one of the following options.\n");
    printf("1: Average calculation.\n");
    printf("2: Approval status.\n");
    printf("3: Exit.\n");
    scanf("%u", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter your grades; they must be in the range of 0 to 10.\n");
        printf("First grade\n");
        scanf("%f", &grade_1);
        printf("Second grade\n");
        scanf("%f", &grade_2);
        printf("Third grade\n");
        scanf("%f", &grade_3);
        printf("Fourth grade\n");
        scanf("%f", &grade_4);
        if (grade_1 < 0 || grade_1 > 10 ||
            grade_2 < 0 || grade_2 > 10 ||
            grade_3 < 0 || grade_3 > 10 ||
            grade_4 < 0 || grade_4 > 10) {
            printf("Invalid Grade: they must be in the range of 0 to 10. ");
            return 1;
        }else {
           float result = (grade_1 + grade_2 + grade_3 + grade_4) / 4;
           printf("Your average grade is: %.2f", result);
        }
        break;
    case 2:
        printf("Enter your average grade:");
        scanf("%f", &mean);
        if (mean >= 6) {
            printf("Congratulation, You passed!");
        }else {
            printf("You failed a grade");
        }
        break;
    case 3:
        printf("Exiting");
        return 0;
    default:
        printf("Invalid value");
        return 1;
    }

    return 0;
}