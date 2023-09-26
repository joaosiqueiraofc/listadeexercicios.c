#include <stdio.h>

int main(){
    char type;
    int pagamento;
    int pagamentodois;
    
    scanf("%c", &type);
    scanf("%d", &pagamento);

    if(type == 'a'){
        pagamentodois = pagamento * 1.05;
        printf("R$ %d", pagamento);
    } else if(type == 'b'){
        pagamentodois = pagamento * 1.07;
        printf("R$ %d", pagamentodois);
    } else if(type == 'c'){
        pagamentodois = pagamento * 1.08;
        printf("R$ %d", pagamentodois);
    }

    return 0;
}