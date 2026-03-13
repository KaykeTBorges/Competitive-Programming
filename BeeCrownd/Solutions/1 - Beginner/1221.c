#include <stdio.h>
#include <math.h>

int ehPrimo(int x){
    int i, contador = 2;
    int raiz = sqrt(x);

    for(i = 2; i <= x; i++){
        if(x % i == 0){
            contador += 1;
        }
    }
    if(contador == 2){
        return 1;
    }else{
        return 0;
    }
}
 
int main() {
    int i, n;
    int valor1;
    int primo = 0;

    scanf("%d", &n);

    for(i = 1; i < n; i++){
        scanf("%d\n", &valor1);
        primo = ehPrimo(valor1);
        printf("%d\n", primo);

        if(primo){
            printf("Prime\n");
        }else{
            printf("Not Prime\n");
        }
    }
 
    return 0;
}