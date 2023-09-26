#include <stdio.h>

int main(){
    char pass[5];
    int caract, passdois, checkdois;
    char check[5];

    scanf("%s", pass);
    pass[4] = '\0';
    
    do{ 
    scanf("%s", check);
    check[4] = '\0';

    passdois = atoi(pass);
    checkdois = atoi(check);

    if(passdois == checkdois){
        printf("senha valida!\n");
    } else{
        printf("senha invalida!\n");
    }
    } while(passdois != checkdois);
       
    return 0;
}