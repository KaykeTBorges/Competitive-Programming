#include <stdio.h>
 
int main() {
 int i, j;
 int quantidade;
 float suprimentos;
 int dias;
 
 scanf("%d", &quantidade);
 
 for(i = 1; i <= quantidade; i++){
     scanf("%f", &suprimentos);
     dias = 0;
     for(j = 1; j < suprimentos;){
         suprimentos = suprimentos / 2;
         dias += 1;
     }
     printf("%d dias\n", dias);
 }
 
    return 0;
}