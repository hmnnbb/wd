#include <stdio.h>
int main(){
    float base,rate;
    float i;
    scanf("%f%f",&base,&rate);
    for(int i=1;i<=10;i++){
        base=base+base*rate;
        i+=base;
        printf("year %d: %.2ft", i, base);
    }
    return 0;

}