#include <stdio.h>
int main(){
    int X, y;
    scanf("%d", &X);
    if(X > 0){
        y = 1;
    }
    else if(X < 0){
        y = -1;
    }
    else{
        y = 0;
    }
    printf("%d", y);
    return 0;
}