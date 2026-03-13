#include <stdio.h>
 
int main() {
 int num;
 int soma, contador;
 float media;
 
 num = 0;
 soma = 0;
 /*-1 da contagem do número negativo, porque estou contando antes mesmo de ver o número*/
 /*Conseguiria fazer com IF também abordando, mas quis evitar*/
 contador = -1;
 
 while(num >= 0){
     contador += 1;
     soma += num;
     scanf("%d", &num);  
 }
 media = (1.0 * soma) / contador;
 printf("%.2f\n", media);
 
    return 0;
}