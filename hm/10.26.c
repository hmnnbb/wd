#include <stdio.h>
int main()
{
    char grade;
    printf("Please enter your grade (A-D): ");
    fflush(stdout);
    if (scanf(" %c", &grade) != 1) {
        printf("enter data error\n");
        return 1;
    }
    printf("Your score: ");
    switch (grade)
    {
    case 'A':
        printf("90~100\n");
        break;
    case 'B':
        printf("80~89\n");
        break;
    case 'C':
        printf("70~79\n");
        break;
    case 'D':
        printf("60~69\n");
        break;
    default:
        printf("enter data error\n");
        break;
    }
    return 0;
}
