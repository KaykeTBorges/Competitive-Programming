#include <stdio.h>

#define TAMANHO 10
 
int main() {
    int array[TAMANHO];
    int i;
    
    for(i = 0; i < TAMANHO; i++){
        scanf("%d", &array[i]);
        if(array[i] <= 0){
            printf("X[%d] = 1\n", i);
        }else{
            printf("X[%d] = %d\n", i, array[i]);
        }
    }
 
    return 0;
}