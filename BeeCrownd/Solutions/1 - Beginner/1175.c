#include <stdio.h>
 
#define TAMANHO 20
 
int main() {
    int i, vetor[TAMANHO];
    
    for(i = 19; i >= 0; i--){
        scanf("%d", &vetor[i]);
    }
    for(i = 0; i < TAMANHO; i++){
        printf("N[%d] = %d\n", i, vetor[i]);
    }
 
    return 0;
}