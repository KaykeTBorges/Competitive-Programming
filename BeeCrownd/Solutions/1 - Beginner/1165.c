#include <stdio.h>
 
int main() {
 int i, j;
 int quantidade, num;
 int divisores = 0;
 
 scanf("%d", &quantidade);
 
 for(i = 1; i <= quantidade; i++){
     scanf("%d", &num);
     divisores = 0;
     for(j = 1; j <= num; j++){
         if(num % j == 0){
          divisores += 1;   
         }
     }
     if(divisores == 2){
         printf("%d eh primo\n", num);
     }else{
         printf("%d nao eh primo\n", num);
     }
 }
 
 
    return 0;
}