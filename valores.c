#include <stdio.h>

int main(){
    int c, d;

    scanf("%d %d", &c, &d);
    
    if(c == d){
        printf("Os valores lidos sao iguais.\n");
    } else if(c > d){
        printf("%d 3 maior que %d. ", c, d);
        if(c % d == 0){
            printf("%d e multiplo de %d.\n", c, d);
        } else{
            printf("%d nao e multiplo de %d.\n", c, d);
        }
    } else if(c < d){
        printf("%d e maior que %d. ", c, d);
        if(d % c == 0){
            printf("%d e multiplo de %d.\n", d, c);
        } else{
            printf("%d nao e multiplo de %d.\n", d, c);
        }
    }

    return 0;
}