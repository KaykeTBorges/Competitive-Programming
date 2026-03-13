#include <stdio.h>

#define MAXSIZE 1000
 
int main() {
    int i, casos;
    int vetor[MAXSIZE] = {0};
    int contagem[MAXSIZE] = {0};
    
    scanf("%d", &casos);
    
    for(i = 0; i < casos; i++){
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0){
            contagem[2] += 1;
        }
        if(vetor[i] % 3 == 0){
            contagem[3] += 1;
        }
        if(vetor[i] % 4 == 0){
            contagem[4] += 1;
        }
        if(vetor[i] % 5 == 0){
            contagem[5] += 1;
        }
    }
    
    printf("%d Multiplo(s) de 2\n", contagem[2]);
    printf("%d Multiplo(s) de 3\n", contagem[3]);
    printf("%d Multiplo(s) de 4\n", contagem[4]);
    printf("%d Multiplo(s) de 5\n", contagem[5]);
    
 
    return 0;
}