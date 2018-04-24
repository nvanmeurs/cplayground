/*
 * Name: project10.c
 * Purpose: Convert numeric grade to letter grade
 * Author: Nicky van Meurs
 */

#include <stdio.h>

int main(void)
{
    int grade;
    char letter_grade;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100)
    {
        printf("Error, grade must be between 0 and 100.\n");
        return 1;
    }

    grade /= 10;

    switch (grade)
    {
    case 10:
    case 9:
        letter_grade = 'A';
        break;

    case 8:
        letter_grade = 'B';
        break;

    case 7:
        letter_grade = 'C';
        break;

    case 6:
        letter_grade = 'D';
        break;

    default:
        letter_grade = 'F';
    }

    printf("Letter grade: %c\n", letter_grade);

    return 0;
}