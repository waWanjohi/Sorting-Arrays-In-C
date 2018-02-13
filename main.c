#include <stdio.h>

int main()
{
    float marks1, marks2, marks3,total,average;

    printf("Enter marks obtained in algorithms :\n");
    scanf("%f", &marks1);
    printf("Enter marks obtained in networking :\n");
    scanf("%f", &marks2);
    printf("Enter marks obtained in system design :\n");
    scanf("%f", &marks3);

    total = (marks1 + marks2 + marks3) ;
    printf("Your total marks is: %0.2f\n\n", total);
    average = (marks1 + marks2 + marks3) / 3;
    printf("Your average is : %0.2f\n\n", average);

    if (average >= 90)
    {
        printf("Grade A. Excellent");
    }
    else if (average >= 80)
    {
        printf("Grade B. Good job");
    }
    else if (average >= 70)
    {
        printf("Grade C. YOu barely made it");
    }
    else if (average >= 60)
    {
        printf("Grade D. You should consider changing your major");
    }
    else
    {
        printf("Grade F. Fail!");
    }

    return 0;
}
