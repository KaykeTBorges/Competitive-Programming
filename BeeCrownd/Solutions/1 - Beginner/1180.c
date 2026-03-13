#include <stdio.h>
 
int main() {
    int i, menor = 10000, posicao;
    int n;
    
    scanf("%d", &n);
    
    int vetor[n];
    
    for(i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    for(i = 0; i < n; i++){
        if(vetor[i] < menor){
            menor = vetor[i];
            posicao = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);
 
    return 0;
}