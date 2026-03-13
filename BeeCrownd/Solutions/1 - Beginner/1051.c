#include <stdio.h>

int main(){
    double salary;
    double valorImposto;
    int imposto1, imposto2, imposto3, imposto4;

    scanf("%lf", &salary);
    
    imposto1 = salary <= 2000;
    imposto2 = salary <= 3000;
    imposto3 = salary <= 4500;
    imposto4 = salary > 4500; 

    if (imposto1){
        printf("Isento\n");
    }else if(imposto2){
    /*Só vai pagar o excedente de 2000*/
        valorImposto = (salary - 2000.0) * 0.08;
        printf("R$ %.2lf\n", valorImposto);
    }else if(imposto3){
    /*Não paga os 2000, vai pagar o 1000 do imposto de 3000*/
    /*Mais o valor do imposto de até 4500*/
        valorImposto = ((1000.0 * 0.08) + ((salary - 3000.0) * 0.18));
        printf("R$ %.2lf\n", valorImposto);
    }else if (imposto4){
    /*Não paga os 2000, vai pagar 1000 do imposto 3000*/
    /*Vai pagar o 1500 do imposto 4500 e o que exceder do valor acima de 4500*/
        valorImposto = ((1000.0 * 0.08) + (1500 * 0.18) + ((salary - 4500) * 0.28));
        printf("R$ %.2lf\n", valorImposto);
    }

    return 0;
}