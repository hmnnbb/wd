#include <stdio.h>
int main()
{int a,b,c,d;
    scanf("%d",&a);
    b=a%10;
    c=((a-b)/10)%10;
    d=a/100;
    printf("%d",b*100+c*10+d);
    return 0;

}