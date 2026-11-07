#include <stdio.h> 
int main(){
    int i=1,sum=0;
    while(i<=10){
        if (i%3==0)
        {
            i++;
            continue;
        }
        sum+=i;
        i++;
    }
    printf("sum = %d\n", sum);
    return 0;
}