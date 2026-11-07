#include <stdio.h>

int main(void)
{
    int score;
    printf("please enter your score (0~100): ");
    scanf("%d", &score);

    if (score < 0 || score > 100) {
        printf("input error\n");
        return 0;
    }

    switch (score / 10) {
        case 10:
            printf("excellent\n");
            break;
        case 9:
            printf("excellent\n");
            break;
        case 8:
            printf("good\n");
            break;
        case 7:
            printf("fair\n");
            break;
        case 6:
            printf("pass\n");
            break;
        default:
            printf("fail\n");
            break;
    }

    return 0;
}