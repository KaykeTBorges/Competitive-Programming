#include <stdio.h>
 
int main() {
 int i;
 int numero;
 int maior = -10000;
 int contador = 0;
 int posicao;
 
 for(i = 1; i <= 100; i++){
     scanf("%d", &numero);
     contador += 1;
     if(numero > maior){
        maior = numero; 
        posicao = contador;
     }
 }
 printf("%d\n", maior);
 printf("%d\n", posicao);
 
    return 0;
}