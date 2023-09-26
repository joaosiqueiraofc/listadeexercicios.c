#include <stdio.h>

int main(){
    char save[10];
    int caract;
    int mais = 0;
    
    for(int i = 0; i < 10; i++){
        caract = getchar();
        if(caract == '\n' ){
            break;
        }
        save[i] = caract;
        mais += (caract - '0'); 
    }

    int save2 = atoi(save);

    if(save2 % 2 == 0){
        printf("%d eh par\n", save2);
        printf("A soma dos algarismos de %d eh %d", save2, mais);
    } else{
        printf("%d eh  ímpar\n", save2);
        printf("A soma dos algarismos de %d eh %d", save2, mais);
    }

    return 0;
}