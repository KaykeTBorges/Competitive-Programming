#include <stdio.h>
 
int main() {
 int i, valor;
 int multi = 0;
 
 scanf("%d", &valor);
 for(i = 1; i <= 10; i++){
     multi = valor * i;
     printf("%d x %d = %d\n", i, valor, multi);
 }
 
    return 0;
}