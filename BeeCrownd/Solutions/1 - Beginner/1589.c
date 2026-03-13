#include <stdio.h>
 
int main() {
 int i, quantidade;
 int raio1, raio2;
 int soma = 0;
 
 scanf("%d", &quantidade);
 
 for(i = 1;i <= quantidade;i++){
     scanf("%d %d", &raio1, &raio2);
     soma = raio1 + raio2;
     printf("%d\n", soma);
 }
 
    return 0;
}