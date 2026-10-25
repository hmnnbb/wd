#include <stdio.h>
int main()
{
    float weight,length,BMI;
    scanf("%f %f",&weight,&length);
     BMI=weight/(length*length);
     printf("BMI=%.2f\n",BMI);
     return 0;
}