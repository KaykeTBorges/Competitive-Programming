#include <stdio.h>
 
#define TAMANHO 10
 
int main() {
    int i, vetor[TAMANHO];
    
    scanf("%d", &vetor[0]);
    printf("N[0] = %d\n", vetor[0]);
    
    for(i = 1; i < TAMANHO; i++){
        vetor[i] = vetor[i - 1] * 2;
        printf("N[%d] = %d\n", i, vetor[i]);
    }
 
    return 0;
}