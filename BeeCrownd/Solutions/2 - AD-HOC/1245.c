#include <stdio.h>
 
#define MAXSIZE 61

int main() {
    int i, quantidade, tamanho;
    char pe;
    int pares;
    
    while(scanf("%d", &quantidade) != EOF){
        int vetorE[MAXSIZE] = {0};
        int vetorD[MAXSIZE] = {0};
        pares = 0;
        
        for(i = 0; i < quantidade; i++){
            scanf("%d %c", &tamanho, &pe);
            if(pe == 'D'){
                vetorD[tamanho] += 1;
            }else if(pe == 'E'){
                vetorE[tamanho] += 1;
            }
        }
        for(i = 30; i < MAXSIZE; i++){
            if(vetorD[i] > 0 && vetorE[i]){
                if(vetorD[i] == vetorE[i]){
                pares += vetorD[i];
                }else if(vetorD[i] > vetorE[i]){
                    pares += vetorE[i];
                }else if(vetorE[i] > vetorD[i]){
                    pares += vetorD[i];
                }
            }
        }
        
        printf("%d\n", pares);
    }
 
    return 0;
}