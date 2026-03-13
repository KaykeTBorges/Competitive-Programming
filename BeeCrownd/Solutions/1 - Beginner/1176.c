#include <stdio.h>
 
int main() {
    int i, casos;
    int vetor, fibonacci = 0;
    
    scanf("%d", &casos);
    
    for(i = 1; i <= casos; i++){
        scanf("%d", &vetor);
        if(vetor != 0){
            fibonacci = (vetor - 1) + (vetor - 2);
            printf("%d\n", fibonacci);
        }else{
            fibonacci = 0;
            printf("%d\n", fibonacci);
        }
    }
 
    return 0;
}