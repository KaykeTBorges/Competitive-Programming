#include <stdio.h>

int main(){
    int idade;
    int resto_ano, resto_mes;
    int ano, mes, dia;
    
    scanf("%d", &idade);
    
    if (idade >= 365){
        ano = idade / 365;
        resto_ano = idade % 365;
        mes = resto_ano / 30;
        resto_mes = resto_ano % 30;
        dia = resto_mes;
    }else if (idade >= 30){
        ano = 0;
        mes = idade / 30;
        dia = idade % 30;
    }else if (idade < 30){
        ano = 0;
        mes = 0;
        dia = idade;
    }
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);
    
    return 0;
}