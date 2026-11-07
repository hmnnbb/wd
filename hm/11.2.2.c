#include <stdio.h> 
int main(){
    int i=1,sum=0;
do{
        if (i%3==0)
        {
            i++;
            continue;
        }
        sum+=i;
        i++;
    }while(i<=10);
    printf("sum = %d\n", sum);
    return 0;
}