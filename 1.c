#include <stdio.h>
int main(){
    float base,rate;
    int i = 1;
    scanf("%f%f",&base,&rate);
    while(i<=10){
        base=base+base*rate;
        printf("year %d: %.2ft", i, base);
        i++;
    }
    return 0;

}