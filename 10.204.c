#include <stdio.h>
int main()
{
    int IDcard;
    char name[20];
    float money;
    scanf("%d %s %f", &IDcard, name, &money);
    printf("IDcard:%d  name:%s  money:%.2f\n", IDcard, name, money);
    return 0;
}