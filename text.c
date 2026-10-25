#include <stdio.h>
int main()
{int score;
    int getGrade(int score);
    printf("Enter the score: ");
    scanf("%d", &score);
    int grade = getGrade(score);
    printf("Grade: %c\n", grade);
    if (grade == 'I')
        printf("Invalid score entered.\n");
    else
        printf("The grade is valid.\n");
    return 0;
}
int getGrade(int score)
{
    if (score >= 90&& score <= 100)
        return 'A';
    else if (score >= 80)
        return 'B';
    else if (score >= 70)
        return 'C';
    else if (score >= 60)
        return 'D';
    else if (score >= 0)
        return 'E';
    else
        return 'I'; // Invalid score
        
}