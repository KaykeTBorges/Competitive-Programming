#include <stdio.h>
 
int main() {
 int i;
 int valor;
 int fatorial;
 fatorial = 1;
 
 scanf("%d", &valor);
 
 for(i = 1; i <= valor; i++){
     fatorial = fatorial * i;
 }
 printf("%d\n", fatorial);

    return 0;
}