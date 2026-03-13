#include <stdio.h>

float ValorGolpe(int ataque, int defesa){
    int valor;
    valor = (ataque + defesa) / 2;
    return valor;
}
 
int main() {
    int i, n;
    int ataqueP1, defesaP1, nivelP1;
    int ataqueP2, defesaP2, nivelP2;
    int player1, player2;
    int bonus;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d", &bonus);
        scanf("%d %d %d", &ataqueP1, &defesaP1, &nivelP1);
        scanf("%d %d %d", &ataqueP2, &defesaP2, &nivelP2);
        
        player1 = ValorGolpe(ataqueP1, defesaP1);
        player2 = ValorGolpe(ataqueP2, defesaP2);

        if (nivelP1 % 2 == 0){
            player1 = player1 + bonus;
        }
        if(nivelP2 % 2 == 0){
            player2 = player2 + bonus;
        }

        if (player1 > player2){
            printf("Dabriel\n");
        }else if(player2 > player1){
            printf("Guarte\n");
        }else if(player1 == player2){
            printf("Empate\n");
        }
        
    }
 

 
    return 0;
}