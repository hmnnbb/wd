#include <stdio.h>
int main()
{
    int laji;
    printf("please enter the type of garbage (1~4):");
    scanf("%d", &laji);
    switch (laji)
    {
        case 1:
        printf("green garbage\n");
        break;
        case 2: 
        printf("black garbage\n");
        break;
        case 3: 
        printf("white garbage\n");
        break;
        case 4:
        printf("gray garbage\n");
        break;
        default:
        printf("Invalid input\n");
        break;  
} 
return 0;
}