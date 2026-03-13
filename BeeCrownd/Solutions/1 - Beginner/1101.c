#include <stdio.h>
 
int main() {
 int value1, value2;
 int i, soma;

 value1 = 1;
 value2 = 1;
 
 while((value1 > 0) && (value2 > 0)){
     soma = 0;
     scanf("%d %d", &value1, &value2);
     if((value1 > 0) && (value2 > 0)){
        if(value1 > value2){
            for(i = value2; i <= value1; i++){
              printf("%d ", i);
              soma += i;
         }
         printf("Sum=%d\n", soma);
        }else if(value2 > value1){
            for(i = value1; i <= value2; i++){
              printf("%d ", i);
              soma += i;
         }
         printf("Sum=%d\n", soma);
     }
    }
 }
 
    return 0;
}