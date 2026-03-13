#include <stdio.h>
 
#define MAXSIZE 12
 
int main() {
    float vetor[MAXSIZE][MAXSIZE];
    int i, j, valor;
    float soma, media;
    char operacao, lixo;
    
    scanf("%d", &valor);
    scanf("%c%c", &lixo, &operacao);
    
    soma = 0;
    
    for(i = 0; i < MAXSIZE; i++){
        for(j = 0; j < MAXSIZE; j++){
            scanf("%f", &vetor[i][j]);
            if(j == valor){
                soma += vetor[i][j];
            }
        }
    }
    
    if(operacao == 'S'){
        printf("%.1f\n", soma);
    }else if(operacao == 'M'){
        media = soma / MAXSIZE;
        printf("%.1f\n", media);
    }
 
    return 0;
}