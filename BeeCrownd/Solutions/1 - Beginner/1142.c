#include <stdio.h>
 
int main() {
 int i, valor;
 
 scanf("%d", &valor);
 /*Ele pula de 4 em quatro e seu valor final é multiplo de 4
 logo eu preciso fazer um for que depois de imprimar o primeiro, some mais 4*/
 for(i = 1; i <= (valor * 4);){
     printf("%d %d %d PUM\n", (i), (i+1), (i+2));
     i += 4;
 }
 
    return 0;
}