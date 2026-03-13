#include <stdio.h>
 
int main() {
 int quantidade, soma;
 int num, i, j;
 
 scanf("%d", &quantidade);

 soma = 0;
 
 for(i = 1; i <= quantidade; i++){
    scanf("%d", &num);
    soma = 0;
     for(j = 1; j < num; j++){
         if(num % j == 0){
             soma += j;
         }
     }
    if(soma == num){
        printf("%d eh perfeito\n", num);
    }else{
        printf("%d nao eh perfeito\n", num);
             }

 }
 
    return 0;
}