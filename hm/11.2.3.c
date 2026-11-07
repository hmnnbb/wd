#include <stdio.h>
int main(){
    int i=1, n,num=1,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        num=num*i;
        sum+=num;
    }
    printf("%d\n", sum);

    return 0;
}