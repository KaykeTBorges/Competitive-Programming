#include <stdio.h>
 
int main() {
 char senha[4], digitado[4];
 senha[4] = '2002';
 digitado[4] = ' ';
 
 do{
    scanf("%s", &digitado[4]);
    if(digitado[4] != senha[4]){
        printf("Senha Invalida\n");
     }
 }while(digitado[4] != senha[4]);
 printf("Acesso Permitido\n");
 
    return 0;
}