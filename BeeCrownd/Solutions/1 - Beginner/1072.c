#include <stdio.h>
 
int main() {
 int i, quantidade;
 int value;
 int dentro, fora;
 
 scanf("%d", &quantidade);
 
 dentro = 0;
 fora = 0;
 
 for(i = 1 ; i <= quantidade ; i++){
     scanf("%d", &value);
     if(value >= 10 && value <= 20){
         dentro += 1;
     }else{
         fora += 1;
     }
 }
 printf("%d in\n", dentro);
 printf("%d out\n", fora);
 
    return 0;
}