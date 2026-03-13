#include <stdio.h>
 
int main() {
    int i, casos = 1;
    int jogador1, jogador2, contador1, contador2;
    
    contador1 = 0;
    contador2 = 0;
    
    while(casos != 0){
        scanf("%d", &casos);
        if(casos == 0){
            break;
        }
        contador1 = 0;
        contador2 = 0;
        
        for(i = 1; i <= casos; i++){
            scanf("%d %d", &jogador1, &jogador2);
            if(jogador1 > jogador2){
                contador1++;
            }else if(jogador2 > jogador1){
                contador2++;
            }
        }
        printf("%d %d\n", contador1, contador2);
    }

 
    return 0;
}