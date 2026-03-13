#include <stdio.h>
         
#define MAXSIZE 2001
 
int main() {
    int vetor[MAXSIZE] = {0};
    int i, j, casos, valor;
    
    scanf("%d", &casos);
    
    for(i = 0; i < casos; i++){
        scanf("%d", &valor);
        vetor[valor] += 1;
    }
    for(i = 0; i < MAXSIZE; i++){
        if(vetor[i] > 0){
            printf("%d aparece %d vez(es)\n", i, vetor[i]);
        }
    }
 
    return 0;
}