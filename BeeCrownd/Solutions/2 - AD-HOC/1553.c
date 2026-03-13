#include <stdio.h>
     
#define MAXSIZE 1001
 
int main() {
    int i, valor;
    int casos = 1, frequencia = 1, contador;
    
    while(casos > 0 && frequencia > 0){
        int vetor[MAXSIZE] = {0};
        contador = 0;
        
        scanf("%d %d", &casos, &frequencia);
        if(casos == 0 && frequencia == 0){
            break;
        }
        
        for(i = 0; i < casos; i++){
            scanf("%d", &valor);
            vetor[valor] += 1;
            if(vetor[valor] == frequencia){
                contador += 1;
            }
        }
        
        printf("%d\n", contador);
        

    }
 
    return 0;
}