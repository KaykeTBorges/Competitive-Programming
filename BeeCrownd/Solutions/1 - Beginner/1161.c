#include <stdio.h>
 
long long int Fatorial(long long int x){
    if(x == 0){
        return 1;
    }else{
        int i = x - 1;
        for(i; i > 1; i--){
            x = x * i;
    }
        return x;
    }
}
int main() {
    int valor1, valor2;
    long long int fatorial1, fatorial2;
    long long int soma = 0;
 
    while(scanf("%d %d", &valor1, &valor2) != EOF) {
        fatorial1 = Fatorial(valor1);
        fatorial2 = Fatorial(valor2);

        soma = fatorial1 + fatorial2;

        printf("%lld\n", soma);
    }
    
    
 
    return 0;
}