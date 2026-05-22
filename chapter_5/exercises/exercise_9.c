/*
Are the following if statements equivalent? If not, why not?
    if (score >= 90)
        printf("A");
    else if (score >= 80)
        printf("B");
    else if (score >= 70)
        printf("C");
    else if (score >= 60)
        printf("D");
    else
        printf("F");

    if (score < 60)
        printf("F");
    else if (score < 70)
        printf("D");
    else if (score < 80)
        printf("C");
    else if (score < 90)
        printf("B");
    else
        printf("A");





            Yes, they are equivalent.

            First version checks from highest score to lowest:

            score ≥ 90 → A
            score ≥ 80 → B
            score ≥ 70 → C
            score ≥ 60 → D
            otherwise → F

            Second version checks from lowest score to highest:

            score < 60 → F
            score < 70 → D
            score < 80 → C
            score < 90 → B
            otherwise → A

            Both versions divide the same score ranges:

            < 60 → F
            60–69 → D
            70–79 → C
            80–89 → B
            ≥ 90 → A

            Conclusion:
            They produce exactly the same output for every possible score, just in opposite checking order.
*/

#include <stdio.h>

int main(void)
{
    int score;
    printf("Enter a score: ");
    scanf("%d", &score);

    // Version 1
    if (score >= 90)
        printf("A\n");
    else if (score >= 80)
        printf("B\n");
    else if (score >= 70)
        printf("C\n");
    else if (score >= 60)
        printf("D\n");
    else
        printf("F\n");

    // Version 2
    if (score < 60)
        printf("F\n");
    else if (score < 70)
        printf("D\n");
    else if (score < 80)
        printf("C\n");
    else if (score < 90)
        printf("B\n");
    else
        printf("A\n");

    return 0;
}