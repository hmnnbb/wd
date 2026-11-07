#include <stdio.h>
int main()
{
    float high;
    printf("please enter your height (m):");
    if (scanf("%f", &high) != 1 || high < 0.0f) {
        printf("input error\n");
        return 1;
    }

    if (high <= 1.2f) {
        printf("free ticket\n");
    } else if (high < 1.5f) {
        printf("the half ticket\n");
    } else {
        printf("full ticket\n");
    }

    return 0;
}
