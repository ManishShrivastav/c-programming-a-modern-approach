/*
11.
11.Write the following function:
float compute_GPA(char grades[], int n);
The grades array will contain letter grades (A, B, C, D, or F, either upper-case or lower-
case); n is the length of the array. The function should return the average of the grades
(assume that A = 4, B = 3, C = 2, D = 1, and F = 0).
*/

#include <stdio.h>

float compute_GPA(char grades[], int n);

int main(void)
{
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    int n = sizeof(grades) / sizeof(grades[0]);
    float gpa = compute_GPA(grades, n);
    printf("The average GPA is: %.2f\n", gpa);
    return 0;
}

float compute_GPA(char grades[], int n)
{
    int total_points = 0;
    for (int i = 0; i < n; i++)
    {
        char grade = grades[i];
        switch (grade)
        {
            case 'A': case 'a':
                total_points += 4;
                break;
            case 'B': case 'b':
                total_points += 3;
                break;
            case 'C': case 'c':
                total_points += 2;
                break;
            case 'D': case 'd':
                total_points += 1;
                break;
            case 'F': case 'f':
                total_points += 0;
                break;
            default:
                printf("Invalid grade: %c\n", grade);
                return -1; // Return -1 for invalid grade
        }
    }
    return (float)total_points / n; // Return the average GPA
}