#include <stdio.h>
 
#define TAMANHO 100
 
int main() {
    float vetor[TAMANHO];
    int i;
    
    for(i = 0; i < TAMANHO; i++){
        scanf("%f", &vetor[i]);
        if(vetor[i] <= 10.0){
            printf("A[%d] = %.1f\n", i, vetor[i] * 1.0);
        }
    }
 
    return 0;
}