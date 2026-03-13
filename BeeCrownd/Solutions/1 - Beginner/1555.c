#include <stdio.h>
#include <math.h>

int Rafael(int x, int y){
    int valor;
    int pow = 3 * x;
    valor = (pow * pow) + (y * y);
    return valor;
}
int Beto(int x, int y){
    int valor;
    int pow = 5 * y;
    valor = (2 * (x * x)) + (pow * pow);
    return valor;
}
int Carlos(int x, int y){
    int valor;
    valor = (-100 * x) + (y * y * y);
    return valor;
}
 
int main() {
    int i, n;
    int valor1, valor2;
    int rafael, beto, carlos;
    
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++){
        scanf("%d %d", &valor1, &valor2);

        rafael = Rafael(valor1, valor2);
        beto = Beto(valor1, valor2);
        carlos = Carlos(valor1, valor2);

        if(rafael > beto && rafael > carlos){
            printf("Rafael ganhou\n");
        }else if(beto > rafael && beto > carlos){
            printf("Beto ganhou\n");
        }else if(carlos > rafael && carlos > beto){
            printf("Carlos ganhou\n");
        }
    }
 
    return 0;
}