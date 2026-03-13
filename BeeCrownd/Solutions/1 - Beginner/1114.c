#include <stdio.h>
 
int main() {
 int senha, digitado;
 senha = 2002;
 digitado = -1;
 
 do{
    scanf("%d", &digitado);
    if(digitado != senha){
        printf("Senha Invalida\n");
     }
 }while(digitado != senha);
 printf("Acesso Permitido\n");
 
    return 0;
}