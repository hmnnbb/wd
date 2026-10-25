#include <stdio.h>
int main()
{
    int isTriangle(int a, int b, int c);
    int a, b, c;
    printf("Enter the lengths of the three sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (isTriangle(a, b, c)==1)
        printf("The sides form a triangle.\n");
    else
        printf("The sides do not form a triangle.\n");

    return 0;
}
int isTriangle(int a, int b, int c)
{
    if (a + b > c && a + c > b && b + c > a)
        return 1;// It's a triangle
    else
       return 0;// Not a triangle
}