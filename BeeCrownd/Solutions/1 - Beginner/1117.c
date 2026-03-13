#include <stdio.h>

int main(){
    double nota;
    double media;
    int contador;
    double soma;
    
    contador = 0;
    soma = 0;
    
    while(contador != 2){
        scanf("%lf", &nota);
    if (nota >= 0 && nota <= 10){
        contador += 1;
        soma += nota;
    }else{
        printf("nota invalida\n");
    }
    }
    
    media = 1.0 * soma / 2;
    printf("media = %.2lf\n", media);
    
    return 0;
}