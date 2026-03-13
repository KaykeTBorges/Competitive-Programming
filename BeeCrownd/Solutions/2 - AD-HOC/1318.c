#include <stdio.h>
 
#define MAXSIZE 1001
 
int main() {
    int bilhetes, pessoas, valor;
    int i, contador;
    
    scanf("%d %d", &bilhetes, &pessoas);
    
    while(bilhetes > 0 && pessoas > 0){
        int vetor[MAXSIZE] = {0};
        contador = 0;
        
        for(i = 0; i < pessoas; i++){
            scanf("%d", &valor);
            vetor[valor] += 1;
        }
        
        for(i = 1; i <= bilhetes; i++){
            if(vetor[i] > 1){
                contador++;
            }
        }
        
        printf("%d\n", contador);
        
        scanf("%d %d", &bilhetes, &pessoas);
    }
    
    
    
    
 
    return 0;
}